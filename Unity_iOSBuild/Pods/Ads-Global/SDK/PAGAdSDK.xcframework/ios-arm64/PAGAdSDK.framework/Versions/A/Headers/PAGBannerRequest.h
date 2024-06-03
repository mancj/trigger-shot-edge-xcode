//
//  PAGBannerRequest.h
//  PangleAPI
//
//  Created by bytedance on 2022/3/23.
//

#import "PAGRequest.h"
#import "PAGAdSize.h"

NS_ASSUME_NONNULL_BEGIN

@interface PAGBannerRequest : PAGRequest

+(instancetype)request UNAVAILABLE_ATTRIBUTE;
+ (instancetype)requestWithBannerSize:(PAGBannerAdSize)bannerSize;

@end

NS_ASSUME_NONNULL_END
