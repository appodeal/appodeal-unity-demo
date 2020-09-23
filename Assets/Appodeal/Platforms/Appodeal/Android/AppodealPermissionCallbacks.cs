using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealPermissionCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IPermissionGrantedListener listener;

        internal AppodealPermissionCallbacks(IPermissionGrantedListener listener) : base(
            "com.appodeal.ads.utils.PermissionsHelper$AppodealPermissionCallbacks")
        {
            this.listener = listener;
        }

        private void writeExternalStorageResponse(int result)
        {
            listener.writeExternalStorageResponse(result);
        }

        private void accessCoarseLocationResponse(int result)
        {
            listener.accessCoarseLocationResponse(result);
        }
    }
#else
    {
        public AppodealPermissionCallbacks(IPermissionGrantedListener listener)
        {
        }
    }
#endif
}