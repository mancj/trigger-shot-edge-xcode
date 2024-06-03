//
//  PAGRewardedAdDelegate.h
//  PAGAdSDK-PAGAdSDK
//
//  Created by ByteDance on 2022/4/27.
//

#import "PAGAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGRewardedAd;
@class PAGRewardModel;

@protocol PAGRewardedAdDelegate <PAGAdDelegate>

@optional

/// Tells the delegate that the user has earned the reward.
/// @param rewardedAd rewarded ad instance
/// @param rewardModel user's reward info
- (void)rewardedAd:(PAGRewardedAd *)rewardedAd userDidEarnReward:(PAGRewardModel *)rewardModel;


/// Tells the delegate that the user failed to earn the reward.
/// @param rewardedAd rewarded ad instance
/// @param error failed reson
- (void)rewardedAd:(PAGRewardedAd *)rewardedAd userEarnRewardFailWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
