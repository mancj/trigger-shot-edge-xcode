//
//  PAG_SDImageSVGKCoder.h
//  SDWebImageSVGPlugin
//
//  Created by DreamPiggy on 2018/9/27.
//

#import "PAG_SDImageCoder.h"
NS_ASSUME_NONNULL_BEGIN

/**
 PAG_SDImageSVGKCoder is a SVG image coder, which use the SVGKit for SVG rendering. It support a subset of SVG 1.1 spec. For anything related to SVG rendering, please report issue to https://github.com/SVGKit/SVGKit/.
 */
@interface PAG_SDImageSVGKCoder : NSObject <PAG_SDImageCoder>

@property (nonatomic, class, readonly) PAG_SDImageSVGKCoder *sharedCoder;

@end

NS_ASSUME_NONNULL_END
