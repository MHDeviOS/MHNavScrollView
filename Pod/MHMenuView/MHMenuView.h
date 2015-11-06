//
//  MHMenuView.h
//  MHNavScroll
//
//  Created by ZH on 15/11/6.
//  Copyright © 2015年 M. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MHMenuView;
@class MHMenuItem;
typedef enum {
    MHMenuViewStyleDefault,     // 默认
    MHMenuViewStyleLine,        // 带下划线 (若要选中字体大小不变，设置选中和非选中大小一样即可)
    MHMenuViewStyleFoold,       // 涌入效果 (填充)
    MHMenuViewStyleFooldHollow, // 涌入效果 (空心的)
} MHMenuViewStyle;

@protocol MHMenuViewDelegate <NSObject>
@optional
- (void)menuView:(MHMenuView *)menu didSelesctedIndex:(NSInteger)index currentIndex:(NSInteger)currentIndex;
- (CGFloat)menuView:(MHMenuView *)menu widthForItemAtIndex:(NSInteger)index;
- (CGFloat)menuView:(MHMenuView *)menu itemMarginAtIndex:(NSInteger)index;
@end

@interface MHMenuView : UIView
@property (nonatomic, assign) CGFloat progressHeight;
@property (nonatomic, strong) NSArray *items;
@property (nonatomic, assign) MHMenuViewStyle style;
@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, weak) id<MHMenuViewDelegate> delegate;
@property (nonatomic, copy) NSString *fontName;

- (instancetype)initWithFrame:(CGRect)frame buttonItems:(NSArray *)items backgroundColor:(UIColor *)bgColor norSize:(CGFloat)norSize selSize:(CGFloat)selSize norColor:(UIColor *)norColor selColor:(UIColor *)selColor;
- (void)slideMenuAtProgress:(CGFloat)progress;
- (void)selectItemAtIndex:(NSInteger)index;
@end
