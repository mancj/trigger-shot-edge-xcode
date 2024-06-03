//
//  PAGRewardedModel.h
//  PAGAdSDK-PAGAdSDK
//
//  Created by ByteDance on 2022/4/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PAGRewardModel : NSObject

//奖励名称
@property (nonatomic, copy, readonly) NSString *rewardName;
//奖励钱数
@property (nonatomic, assign, readonly) NSInteger rewardAmount;

- (instancetype)initWithRewardName:(NSString *)rewardName rewardAmount:(NSInteger)rewardAmount;

@end

NS_ASSUME_NONNULL_END
