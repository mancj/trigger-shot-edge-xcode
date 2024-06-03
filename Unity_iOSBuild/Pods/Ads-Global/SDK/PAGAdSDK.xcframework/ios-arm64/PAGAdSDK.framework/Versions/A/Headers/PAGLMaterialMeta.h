//
//  PAGLMaterialMeta.h
//  PAGAdSDK
//
//  Created by Willie on 2022/5/5.
//

NS_ASSUME_NONNULL_BEGIN

@class PAGLImage;

/// media type of ad
typedef NS_ENUM(NSUInteger, PAGLNativeMediaType) {
    PAGLNativeMediaTypeImage = 1, // image ad
    PAGLNativeMediaTypeVideo = 2, // video ad
};

/// A class that encapsulates advertising information
@interface PAGLMaterialMeta : NSObject

/// ad logo icon.
@property (nonatomic, strong, readonly) PAGLImage *icon;

/// ad headline.
@property (nonatomic, copy, readonly) NSString *AdTitle;

/// ad description.
@property (nonatomic, copy, readonly) NSString *AdDescription;

/// text displayed on the creative button.
@property (nonatomic, copy, readonly) NSString *buttonText;

/// media type of ad
@property (nonatomic, assign, readonly) PAGLNativeMediaType mediaType;

@end

NS_ASSUME_NONNULL_END
