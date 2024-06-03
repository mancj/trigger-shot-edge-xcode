//
//  PAGRequest.h
//  PAGAdSDK
//
//  Created by bytedance on 2022/3/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PAGMAdNetworkExtras;
@interface PAGRequest : NSObject

/// Ad string that represents an ad response. The SDK will render this ad and ignore all other
/// targeting information set on this request.
@property (nonatomic, copy) NSString *adString;

/// extra info
@property (nonatomic, copy, nullable) NSDictionary *extraInfo;

+ (instancetype)request;

- (void)registerAdNetworkExtras:(id<PAGMAdNetworkExtras>)extras;

@end

NS_ASSUME_NONNULL_END
