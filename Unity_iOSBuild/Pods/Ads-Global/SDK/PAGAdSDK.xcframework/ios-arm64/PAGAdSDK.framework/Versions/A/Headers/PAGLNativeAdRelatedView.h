//
//  PAGLNativeAdRelatedView.h
//  PAGAdSDK
//
//  Created by Willie on 2022/4/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PAGMediaView, PAGLNativeAd;

/// A class that encapsulates a fixed ad style
@interface PAGLNativeAdRelatedView : NSObject

/// Need to actively add to the view in order to deal with the feedback and improve the accuracy of ad.
@property (nonatomic, strong, readonly) UIButton *dislikeButton;

/// Ad logo + Promotion label.Need to actively add to the view.
@property (nonatomic, strong, readonly) UIImageView *logoADImageView;

/// dsp logo.Need to actively add to the view.
@property (nonatomic, strong, readonly) UIImageView *adChoicesView;

/// A view used to display a video or image, which can be added directly to the ad view.
@property (nonatomic, strong, readonly) PAGMediaView *mediaView;

/// Refresh the data every time you get new datas in order to show ad perfectly.
/// @param nativeAd PAGLNativeAd instance.
- (void)refreshWithNativeAd:(PAGLNativeAd *)nativeAd;

@end

NS_ASSUME_NONNULL_END
