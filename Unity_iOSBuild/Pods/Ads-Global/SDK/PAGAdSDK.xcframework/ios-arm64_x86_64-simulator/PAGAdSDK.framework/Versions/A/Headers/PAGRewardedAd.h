//
//  PAGRewardedAd.h
//  PAGAdSDK-PAGAdSDK
//
//  Created by ByteDance on 2022/4/27.
//

#import <UIKit/UIKit.h>
#import "PAGAdProtocol.h"
#import "PAGAdClientBiddingProtocol.h"
#import "PAGRewardedAdDelegate.h"
#import "PAGRewardedRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGRewardedAd;
/// Callback for loading ad results.
/// @param rewardedAd Ad instance after successfully loaded which will be non-nil on success.
/// @param error Loading error which will be non-nil on fail.
typedef void (^PAGRewardedAdLoadCompletionHandler)(PAGRewardedAd * _Nullable rewardedAd,
                                                  NSError * _Nullable error);

@interface PAGRewardedAd : NSObject<PAGAdProtocol,PAGAdClientBiddingProtocol>

/// Ad event delegate.
@property (nonatomic, weak, nullable) id<PAGRewardedAdDelegate> delegate;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;


/// Load rewarded ad
/// @param slotID Required. The unique identifier of rewarded ad.
/// @param request Required. An instance of a rewarded ad request.
/// @param completionHandler Handler which will be called when the request completes.
+ (void)loadAdWithSlotID:(NSString *)slotID
                 request:(PAGRewardedRequest *)request
       completionHandler:(PAGRewardedAdLoadCompletionHandler)completionHandler;


/// Present the rewarded ad
/// @param rootViewController View controller the rewarded ad will be presented on.
/// @warning This method must be called on the main thread.
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END

