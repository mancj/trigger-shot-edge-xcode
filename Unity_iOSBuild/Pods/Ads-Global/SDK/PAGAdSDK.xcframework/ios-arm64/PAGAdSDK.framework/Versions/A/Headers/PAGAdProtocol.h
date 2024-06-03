//
//  PAGAdProtocol.h
//  PangleSDK
//
//  Created by bytedance on 2022/4/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PAGAdProtocol <NSObject>

/// return extra info
- (nullable NSDictionary *)getMediaExtraInfo;

@end

NS_ASSUME_NONNULL_END
