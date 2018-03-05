//
//  APDImage.h
//  Appodeal
//
//  AppodealSDK version SDK_VERSION_NUMBER_HEADER
//
//  Copyright © 2016 Appodeal, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/*!
 *  Instance of this class contains URL to image source and size of image
 */
@interface APDImage : NSObject

/*!
 *  Size of image, can be APDImageUndefined
 */
@property (nonatomic, assign) CGSize size;

/*!
 *  Url to image source. Can be local
 */
@property (nonatomic, strong, readonly, nonnull) NSURL * url;

@end
