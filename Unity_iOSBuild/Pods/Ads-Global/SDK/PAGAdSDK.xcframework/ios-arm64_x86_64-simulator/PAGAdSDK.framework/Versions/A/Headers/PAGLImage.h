//
//  PAGLImage.h
//  PAGAdSDK
//
//  Created by Willie on 2022/5/5.
//

NS_ASSUME_NONNULL_BEGIN

/// A class that encapsulates image information
@interface PAGLImage : NSObject

/// image address URL
@property (nonatomic, copy, readonly) NSString *imageURL;

/// image width
@property (nonatomic, assign, readonly) CGFloat width;

/// image height
@property (nonatomic, assign, readonly) CGFloat height;

@end

NS_ASSUME_NONNULL_END
