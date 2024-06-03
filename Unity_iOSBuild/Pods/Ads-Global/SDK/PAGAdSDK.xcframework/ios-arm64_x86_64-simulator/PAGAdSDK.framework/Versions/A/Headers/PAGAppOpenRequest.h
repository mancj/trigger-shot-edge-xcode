//
//  PAGAppOpenRequest.h
//  PAGAdSDK-PAGAdSDK
//
//  Created by ByteDance on 2022/4/26.
//

#import "PAGRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface PAGAppOpenRequest : PAGRequest


/// If the ad data is not successfully loaded within the timeout period,
/// a timeout error from the invoked completion handler will be non-nil.
/// default is 3.5s
@property (nonatomic, assign) NSTimeInterval timeout;

@end

NS_ASSUME_NONNULL_END
