//
//  PAGLInterstitialAd.h
//  PangleAPI
//
//  Created by bytedance on 2022/2/25.
//

#import <UIKit/UIKit.h>
#import "PAGAdProtocol.h"
#import "PAGAdClientBiddingProtocol.h"
#import "PAGLInterstitialAdDelegate.h"
#import "PAGInterstitialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGLInterstitialAd;

/// Callback for loading interstitial results.
/// @param interstitialAd Ad instance after successfully loaded which will be non-nil on success.
/// @param error Loading error which will be non-nil on fail.
typedef void (^PAGInterstitialAdLoadCompletionHandler)(PAGLInterstitialAd * _Nullable interstitialAd,
                                                  NSError * _Nullable error);

@interface PAGLInterstitialAd : NSObject<PAGAdProtocol,PAGAdClientBiddingProtocol>

/// Ad event delegate.
@property(nonatomic, weak, nullable) id<PAGLInterstitialAdDelegate> delegate;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;


/// Load interstitial ad
/// @param slotID Required. The unique identifier of interstitial ad.
/// @param request Required. An instance of an interstitial ad request.
/// @param completionHandler Handler which will be called when the request completes.
+ (void)loadAdWithSlotID:(NSString *)slotID
                 request:(PAGInterstitialRequest *)request
       completionHandler:(PAGInterstitialAdLoadCompletionHandler)completionHandler;


/// Present the interstitial ad
/// @param rootViewController View controller the interstitial ad will be presented on.
/// @warning This method must be called on the main thread.
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
