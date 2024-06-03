/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "PAG_SDWebImageCompat.h"
#import "PAG_SDWebImageOperation.h"

/**
 These methods are used to support canceling for UIView image loading, it's designed to be used internal but not external.
 All the stored operations are weak, so it will be dalloced after image loading finished. If you need to store operations, use your own class to keep a strong reference for them.
 */
@interface UIView (PAGWebCacheOperation)

/**
 *  Get the image load operation for key
 *
 *  @param key key for identifying the operations
 *  @return the image load operation
 */
- (nullable id<PAG_SDWebImageOperation>)sdPAG_imageLoadOperationForKey:(nullable NSString *)key;

/**
 *  Set the image load operation (storage in a UIView based weak map table)
 *
 *  @param operation the operation
 *  @param key       key for storing the operation
 */
- (void)sdPAG_setImageLoadOperation:(nullable id<PAG_SDWebImageOperation>)operation forKey:(nullable NSString *)key;

/**
 *  Cancel all operations for the current UIView and key
 *
 *  @param key key for identifying the operations
 */
- (void)sdPAG_cancelImageLoadOperationWithKey:(nullable NSString *)key;

/**
 *  Just remove the operations corresponding to the current UIView and key without cancelling them
 *
 *  @param key key for identifying the operations
 */
- (void)sdPAG_removeImageLoadOperationWithKey:(nullable NSString *)key;

@end
