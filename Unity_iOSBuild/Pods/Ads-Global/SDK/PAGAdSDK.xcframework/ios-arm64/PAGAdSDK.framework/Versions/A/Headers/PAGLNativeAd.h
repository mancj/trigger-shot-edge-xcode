//
//  PAGLNativeAd.h
//  PAGAdSDK
//
//  Created by Willie on 2022/3/1.
//

#import <UIKit/UIKit.h>

#import "PAGAdProtocol.h"
#import "PAGAdClientBiddingProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGLNativeAd, PAGLMaterialMeta, PAGNativeRequest;
@protocol PAGLNativeAdDelegate;

typedef void (^PAGNativeADLoadCompletionHandler)(PAGLNativeAd * _Nullable nativeAd,
                                                  NSError * _Nullable error);

/// Abstract ad slot containing ad data loading, response callbacks.
@interface PAGLNativeAd : NSObject <PAGAdProtocol, PAGAdClientBiddingProtocol>

/// Ad material.
@property (nonatomic, strong, readonly) PAGLMaterialMeta *data;

/// The delegate for receiving state change messages.
/// The delegate is not limited to viewcontroller.
/// The delegate can be set to any object which conforming to <PAGLNativeAdDelegate>.
@property (nonatomic, weak, nullable) id<PAGLNativeAdDelegate> delegate;

/// required.
/// Root view controller for handling ad actions.
/// Action method includes is 'presentViewController'.
@property (nonatomic, weak) UIViewController *rootViewController;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;

/// Actively request nativeAd datas.
/// @param slotID required. The unique identifier of a native ad.
/// @param request required. PAGNativeRequest instance.
/// @param completionHandler required. Callback when ad is loaded.
+ (void)loadAdWithSlotID:(NSString *)slotID
                 request:(PAGNativeRequest *)request
       completionHandler:(PAGNativeADLoadCompletionHandler)completionHandler;

/// Register clickable views in native ads view.
/// Interaction types can be configured on TikTok Audience Network.
/// Interaction types include view video ad details page, open the webpage using a browser, open the webpage within the app, etc.
/// @param containerView required. Container view of the native ad.
/// @param clickableViews optional. Array of views that are clickable.
- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

/// Unregister ad view from the native ad.
- (void)unregisterView;

@end

NS_ASSUME_NONNULL_END
