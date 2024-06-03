//
//  PAGAdSize.h
//  PangleAPI
//
//  Created by bytedance on 2022/2/25.
//

#import <UIKit/UIKit.h>

struct PAGAdSize {
    CGSize size;
};

typedef struct PAGAdSize PAGBannerAdSize;

CG_EXTERN PAGBannerAdSize const kPAGBannerSize320x50;
CG_EXTERN PAGBannerAdSize const kPAGBannerSize300x250;
/// Only for iPad banner ad
CG_EXTERN PAGBannerAdSize const kPAGBannerSize728x90;
