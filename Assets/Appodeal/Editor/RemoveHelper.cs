using System.IO;
using UnityEditor;
using System.Text.RegularExpressions;
using UnityEngine;

[System.Serializable]
class ItemToRemove
{
    public string name;
    public bool is_confirmation_required;
    public string path;
    public string description;
    public bool check_if_empty;
    public string filter;
}

[System.Serializable]
class ItemsWrapper {
    public ItemToRemove[] items;
}

public class RemoveHelper{
	private static ItemToRemove[] readJson(){
		string json = System.IO.File.ReadAllText(Path.Combine(Application.dataPath,"Appodeal/Editor/remove_list.json"));
		ItemsWrapper wrapper = JsonUtility.FromJson<ItemsWrapper>(json);
		return wrapper.items;
	}
	
	public static void removePlugin(){
		ItemToRemove[] items = readJson();
		for(int i = 0; i < items.Length; i++){
			bool confirmed = !items[i].is_confirmation_required;
            string fullItemPath = Path.Combine(Application.dataPath, items[i].path);
			if(items[i].is_confirmation_required){
				if (EditorUtility.DisplayDialog("Removing " + items[i].name, items[i].description, "Yes", "No")){
					confirmed = true;
				}
			}
			if(!confirmed) continue;
			bool isChecked = !items[i].check_if_empty;
			if(!isChecked) isChecked = isFolderEmpty(fullItemPath);
			if(!isChecked) continue;
			if(items[i].filter == null || items[i].filter == ""){
				FileUtil.DeleteFileOrDirectory(fullItemPath);
				continue;
			}
            bool isDirectoryExists = Directory.Exists(fullItemPath);
            if (!isDirectoryExists) continue;
            string[] filesList = Directory.GetFiles(fullItemPath, "*", SearchOption.TopDirectoryOnly);
			for(int j=0; j < filesList.Length; j++){
				string fileName = Path.GetFileName(filesList[j]);
				if(Regex.IsMatch(fileName, items[i].filter, RegexOptions.IgnoreCase))
					FileUtil.DeleteFileOrDirectory(filesList[j]);
			}
			if(isFolderEmpty(fullItemPath)) FileUtil.DeleteFileOrDirectory(fullItemPath);
		}
	}
	
	private  static bool isFolderEmpty(string path){
        if (!Directory.Exists(path)) return false;
		string[] filesPaths = Directory.GetFiles(path, "*", SearchOption.TopDirectoryOnly);
		return filesPaths.Length == 0;
	}
}