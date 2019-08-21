//
//  APDImage.h
//  Appodeal
//
//  AppodealSDK version 2.5.8
//
//  Copyright © 2019 Appodeal, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/*!
 *  Instance of this class contains URL to image source and size of image
 */
@interface APDImage : NSObject

/*!
 *  Size of image. Can be zero
 */
@property (nonatomic, assign) CGSize size  __attribute__((deprecated("This getter is deprecated and will be removed in next release")));

/*!
 *  Url to image source. Can be local
 */
@property (nonatomic, strong, readonly, nonnull) NSURL * url;

@end
