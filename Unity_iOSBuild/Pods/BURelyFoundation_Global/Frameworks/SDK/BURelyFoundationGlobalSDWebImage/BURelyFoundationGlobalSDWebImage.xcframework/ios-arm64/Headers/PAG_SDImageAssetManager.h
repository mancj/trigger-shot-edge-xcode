/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/*
* This file may have been modified by ByteDance Ltd.
* Original Files：SDImageAssetManager/SDWebImage (https://github.com/SDWebImage/SDWebImage)
* Copyright Poitrey <rs@dailymotion.com>
* SPDX-License-Identifier: MIT
*/


#import <Foundation/Foundation.h>
#import "PAG_SDWebImageCompat.h"

// Apple parse the Asset Catalog compiled file(`Assets.car`) by CoreUI.framework, however it's a private framework and there are no other ways to directly get the data. So we just process the normal bundle files :)

@interface PAG_SDImageAssetManager : NSObject

@property (nonatomic, strong, nonnull) NSMapTable<NSString *, UIImage *> *imageTable;

+ (nonnull instancetype)sharedAssetManager;
- (nullable NSString *)getPathForName:(nonnull NSString *)name bundle:(nonnull NSBundle *)bundle preferredScale:(nonnull CGFloat *)scale;
- (nullable UIImage *)imageForName:(nonnull NSString *)name;
- (void)storeImage:(nonnull UIImage *)image forName:(nonnull NSString *)name;

@end
