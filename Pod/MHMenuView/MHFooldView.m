//
//  MHFooldView.m
//  MHNavScroll
//
//  Created by ZH on 15/11/6.
//  Copyright © 2015年 M. All rights reserved.
//

#import "MHFooldView.h"

@implementation MHFooldView {
    CGFloat MHFooldMargin;
    CGFloat MHFooldRadius;
    CGFloat MHFooldLength;
    CGFloat MHFooldHeight;
}

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        MHFooldHeight = frame.size.height;
        MHFooldMargin = MHFooldHeight * 0.15;
        MHFooldRadius = (MHFooldHeight - MHFooldMargin * 2) / 2;
        MHFooldLength = frame.size.width  - MHFooldRadius * 2;
    }
    return self;
}

- (void)drawRect:(CGRect)rect {
    // Drawing code
    int currentIndex = (int)self.progress;
    CGFloat rate = self.progress - currentIndex;
    int nextIndex = currentIndex + 1 >= self.itemFrames.count ?: currentIndex + 1;
    
    // 当前item的各数值
    CGRect  currentFrame = [self.itemFrames[currentIndex] CGRectValue];
    CGFloat currentWidth = currentFrame.size.width;
    CGFloat currentX = currentFrame.origin.x;
    // 下一个item的各数值
    CGFloat nextWidth = [self.itemFrames[nextIndex] CGRectValue].size.width;
    CGFloat nextX = [self.itemFrames[nextIndex] CGRectValue].origin.x;
    // 计算点
    CGFloat startX = currentX + (nextX - currentX) * rate;
    CGFloat endX = startX + currentWidth + (nextWidth - currentWidth)*rate;
    // 绘制
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGContextTranslateCTM(ctx, 0.0f, MHFooldHeight);
    CGContextScaleCTM(ctx, 1.0f, -1.0f);
    CGContextAddArc(ctx, startX+MHFooldRadius, MHFooldHeight / 2.0, MHFooldRadius, M_PI_2, M_PI_2 * 3, 0);
    CGContextAddLineToPoint(ctx, endX-MHFooldRadius, MHFooldMargin);
    CGContextAddArc(ctx, endX-MHFooldRadius, MHFooldHeight / 2.0, MHFooldRadius, -M_PI_2, M_PI_2, 0);
    CGContextClosePath(ctx);
    
    if (self.hollow) {
        CGContextSetStrokeColorWithColor(ctx, self.color);
        CGContextStrokePath(ctx);
        return;
    }
    CGContextClosePath(ctx);
    CGContextSetFillColorWithColor(ctx, self.color);
    CGContextFillPath(ctx);
}

@end
