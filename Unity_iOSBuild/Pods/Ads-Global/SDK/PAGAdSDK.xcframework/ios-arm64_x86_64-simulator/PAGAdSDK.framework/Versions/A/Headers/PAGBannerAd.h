//
//  PAGBannerAd.h
//  PangleAPI
//
//  Created by bytedance on 2022/3/23.
//

#import <UIKit/UIKit.h>
#import "PAGAdProtocol.h"
#import "PAGAdClientBiddingProtocol.h"
#import "PAGBannerAdDelegate.h"
#import "PAGBannerRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGBannerAd;

/// Callback for loading ad results.
/// @param bannerAd Ad instance after successfully loaded which will be non-nil on success.
/// @param error Loading error which will be non-nil on fail.
typedef void (^PAGBannerADLoadCompletionHandler)(PAGBannerAd * _Nullable bannerAd,
                                                  NSError * _Nullable error);

@interface PAGBannerAd : NSObject<PAGAdProtocol,PAGAdClientBiddingProtocol>

/// Ad event delegate.
@property (nonatomic, weak, nullable) id<PAGBannerAdDelegate> delegate;
/// View of the banner ad.
@property (nonatomic, strong, readonly) UIView *bannerView;
/// View controller the banner ad will be presented on.
@property (nonatomic, weak, readwrite) UIViewController *rootViewController;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;


/// Load banner ad
/// @param slotID Required. The unique identifier of banner ad.
/// @param request Required. An instance of a banner ad request.
/// @param completionHandler Handler which will be called when the request completes. 
+ (void)loadAdWithSlotID:(NSString *)slotID
                 request:(PAGBannerRequest *)request
       completionHandler:(PAGBannerADLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
