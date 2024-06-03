//
//  PAGSdk.h
//  PAGAdSDK
//
//  Created by bytedance on 2022/5/9.
//

#import <Foundation/Foundation.h>
#import "PAGConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PAGSDKInitializationState) {
    PAGSDKInitializationStateNotReady = 0,
    PAGSDKInitializationStateReady = 1
};

typedef void (^PAGAdsCompletionHandler)(BOOL success, NSError * __nullable error);

@interface PAGSdk : NSObject

/// Pangle SDK version
@property (nonatomic, copy, readonly, class) NSString *SDKVersion;

/// The SDK initialization state
@property (nonatomic, assign, readonly, class) PAGSDKInitializationState initializationState;

/// Starts the Pangle SDK
/// @warning Call this method as early as possible to reduce  ad request fail.
/// @param config SDK configuration
/// @param completionHandler Callback for starting the Pangle SDK
+ (void)startWithConfig:(PAGConfig *)config completionHandler:(nullable PAGAdsCompletionHandler)completionHandler;

/// Get bidding token
/// @param slotID the unique identifier of  ad.
/// @note This method recommend called on the sub thread.
+ (NSString *)getBiddingToken:(nullable NSString *)slotID;

/// Get bidding token asynchronously
/// @param slotID  the unique identifier of  ad.
/// @param completion Callback to return the bidding token.
+ (void)getBiddingToken:(nullable NSString *)slotID completion:(void (^)(NSString * biddingToken))completion;

/// Set a ad revenue info obtained from mediation.
/// You can get sample code from the Pangle platform to learn how to use this method.
/// @param adRevenue Assemble a dictionary of ad revenue info.
+ (void)setAdRevenue:(NSDictionary *)adRevenue;

@end

NS_ASSUME_NONNULL_END
