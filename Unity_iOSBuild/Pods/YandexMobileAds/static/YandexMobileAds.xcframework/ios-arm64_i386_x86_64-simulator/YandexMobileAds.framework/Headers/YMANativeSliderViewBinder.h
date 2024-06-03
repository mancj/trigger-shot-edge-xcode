/*
 * Version for iOS © 2015–2021 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@class YMANativeAdView;
@protocol YMANativeAd;
@protocol YMANativeSliderView;

NS_ASSUME_NONNULL_BEGIN

@protocol YMANativeSliderViewBinder <NSObject>

- (nullable YMANativeAdView *)boundViewWithAd:(id<YMANativeAd>)ad error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
