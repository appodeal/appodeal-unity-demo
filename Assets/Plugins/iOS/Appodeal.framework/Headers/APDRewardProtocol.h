//
//  APDRewardProtocol.h
//  Appodeal
//
//  AppodealSDK version SDK_VERSION_NUMBER_HEADER
//
//  Copyright © 2016 Appodeal, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 *  Declaration of Appodeal reward protocol object
 */
@protocol APDReward <NSObject>

/*!
 *  App currency name. For example @"Coins", @"Stars"
 */
@property (copy,   nonatomic, readonly, nullable) NSString *currencyName;

/*!
 *  App currency amount
 */
@property (assign, nonatomic, readonly) NSUInteger amount;

@end
