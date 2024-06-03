//
//  PAG_IESGurdKit+CustomParams.h
//  IESGeckoKit
//
//  Created by 陈煜钏 on 2020/3/1.
//

#import "PAG_IESGeckoKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface PAG_IESGurdSyncResourcesParams : NSObject

- (PAG_IESGurdSyncResourcesParams *(^)(NSArray<NSString *> *channels))channels;

- (PAG_IESGurdSyncResourcesParams *(^)(NSString *resourceVersion))resourceVersion;

- (PAG_IESGurdSyncResourcesParams *(^)(NSString *groupName))groupName;

- (PAG_IESGurdSyncResourcesParams *(^)(NSString *businessDomain))businessDomain;

- (PAG_IESGurdSyncResourcesParams *(^)(BOOL forceRequest))forceRequest;

- (PAG_IESGurdSyncResourcesParams *(^)(IESGurdSyncStatusDictionaryBlock completion))completion;

- (dispatch_block_t)syncResources;
    
@end

@interface PAG_IESGurdKit (CustomParams)

/// 创建可配置请求参数对象
/// @param accessKey accessKey
+ (PAG_IESGurdSyncResourcesParams *)syncResourcesParamsWithAccessKey:(NSString *)accessKey;

@end

NS_ASSUME_NONNULL_END
