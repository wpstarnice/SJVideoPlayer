//
//  SJVideoPlayerPresentView.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2017/11/29.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class SJVideoPlayerAssetCarrier;

NS_ASSUME_NONNULL_BEGIN

@interface SJVideoPlayerPresentView : UIView

- (AVPlayerLayer *)avLayer;

@property (nonatomic, weak, readwrite, nullable) SJVideoPlayerAssetCarrier *asset;

@property (nonatomic, strong, readonly) UIImageView *placeholderImageView;

@property (nonatomic, copy, readwrite, nullable) void(^readyForDisplay)(SJVideoPlayerPresentView *view);

@property (nonatomic, copy, readwrite, nullable) void(^receivedVideoRect)(SJVideoPlayerPresentView *view, CGRect bounds);
/// default is AVLayerVideoGravityResizeAspect.
@property (nonatomic, strong, readwrite) AVLayerVideoGravity videoGravity;

@end

NS_ASSUME_NONNULL_END