/*
 * Version for iOS © 2015–2021 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@protocol YMANativeAd;
@class YMANativeAdView;

NS_ASSUME_NONNULL_BEGIN

@protocol YMANativeViewProvider <NSObject>

- (YMANativeAdView *)viewForAd:(id<YMANativeAd>)ad;

@end

NS_ASSUME_NONNULL_END
