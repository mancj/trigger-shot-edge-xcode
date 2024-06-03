//
//  TTGifImageView.h
//  Article
//
//  Created by carl on 2017/5/21.
//
//

#import <UIKit/UIKit.h>
#import "PAGGifImage.h"

@protocol BUAnimationImageView
@property (nonatomic, assign) BOOL repeats;
@property (nonatomic, copy)   void (^completionHandler)(BOOL);
@property (nonatomic, strong, readonly) PAGGifImage *gifImage;
@property (nonatomic, assign) NSInteger currentPlayIndex;
@property (nonatomic, assign) BOOL delayDuration;
@end

@interface PAGGifImageView : UIImageView <BUAnimationImageView>
@property (nonatomic, assign) BOOL repeats;
@property (nonatomic, copy)   void (^completionHandler)(BOOL);
@property (nonatomic, strong, readonly) PAGGifImage *gifImage;
@property (nonatomic, assign) NSInteger currentPlayIndex;
@property (nonatomic, assign) BOOL delayDuration; 
@end
