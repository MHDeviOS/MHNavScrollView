//
//  MHProgressView.h
//  MHNavScroll
//
//  Created by ZH on 15/11/6.
//  Copyright © 2015年 M. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MHProgressView : UIView
@property (nonatomic, strong) NSArray *itemFrames;
@property (nonatomic, assign) CGColorRef color;
@property (nonatomic, assign) CGFloat progress;

- (void)setProgressWithOutAnimate:(CGFloat)progress;
- (void)moveToPostion:(NSInteger)pos;
@end

