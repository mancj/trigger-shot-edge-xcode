//
//  PAGADDelegate.h
//  PAGAdSDK
//
//  Created by bytedance on 2022/4/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PAGAdProtocol;

@protocol PAGAdDelegate <NSObject>

@optional

/// This method is called when the ad has been shown
- (void)adDidShow:(id<PAGAdProtocol>)ad;

/// This method is called when the add has been clicked
- (void)adDidClick:(id<PAGAdProtocol>)ad;

///This method is called when the ad has been dismissed.
- (void)adDidDismiss:(id<PAGAdProtocol>)ad;

///This method is called when the ad has been show fail
- (void)adDidShowFail:(id<PAGAdProtocol>)ad error:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
