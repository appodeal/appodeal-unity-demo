//
//  APDUserInfoProtocol.h
//  Appodeal
//
//  AppodealSDK version 2.5.8
//
//  Copyright © 2019 Appodeal, Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <Appodeal/APDDefines.h>

@protocol APDUserInfo <NSObject>

@property (assign, nonatomic, readonly) NSUInteger age;
@property (assign, nonatomic, readonly) APDUserGender gender;
@property (copy, nonatomic, readonly) NSString *userId;
@property (copy, nonatomic, readonly) NSDictionary *ext;


@end
