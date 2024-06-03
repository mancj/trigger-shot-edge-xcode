//
//  PAGLAppOpenAd.h
//  PAGAdSDK-PAGAdSDK
//
//  Created by ByteDance on 2022/4/26.
//
#import <UIKit/UIKit.h>
#import "PAGLAppOpenAdDelegate.h"
#import "PAGAppOpenRequest.h"
#import "PAGAdProtocol.h"
#import "PAGAdClientBiddingProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class PAGLAppOpenAd;

/// Callback for loading ad results.
/// @param appOpenAd Ad instance after successfully loaded.
/// @param error Loading error.
typedef void (^PAGAppOpenADLoadCompletionHandler)(PAGLAppOpenAd * _Nullable appOpenAd,
                                                 NSError * _Nullable error);

@interface PAGLAppOpenAd : NSObject<PAGAdProtocol>

/// Ad event delegate.
@property (nonatomic, weak, nullable) id<PAGLAppOpenAdDelegate> delegate;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;


/// Load open ad
/// @param slotID Required. The unique identifier of open ad.
/// @param request Required. An instance of an open ad request.
/// @param completionHandler Handler which will be called when the request completes.
+ (void)loadAdWithSlotID:(NSString *)slotID
                 request:(PAGAppOpenRequest *)request
       completionHandler:(PAGAppOpenADLoadCompletionHandler)completionHandler;


/// Present the open ad
/// @param rootViewController View controller the open ad will be presented on.
/// @warning This method must be called on the main thread.
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
