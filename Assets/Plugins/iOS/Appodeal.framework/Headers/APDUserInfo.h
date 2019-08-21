//
//  APDUserInfo.h
//  Appodeal
//
//  AppodealSDK version 2.5.8
//
//  Copyright © 2019 Appodeal, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Appodeal/APDUserInfoProtocol.h>

/**
 *  Instance of class provides user data for targeting
 */
@interface APDUserInfo : NSObject <APDUserInfo>
/**
 *  Set user ID
 */
@property (copy, nonatomic) NSString *userId;
/**
 *  Set user age
 */
@property (assign, nonatomic) NSUInteger age;
/**
 *  Set user gender
 */
@property (assign, nonatomic) APDUserGender gender;
@end
