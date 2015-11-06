
//
//  MHUserShow.h
//  MHNavScroll
//
//  Created by ZH on 15/11/6.
//  Copyright © 2015年 M. All rights reserved.
//

#ifndef MHUserShow_h
#define MHUserShow_h
/*
MHPageController *pageController = [self p_defaultController];
if ([self.styles[indexPath.row] isEqualToString:@"MHMenuViewStyleDefault"]) {
    // 默认
    pageController.title = @"Default";
    pageController.titleSizeSelected = 18;
} else if ([self.styles[indexPath.row] isEqualToString:@"MHMenuViewStyleLine"]) {
    // 下划线
    pageController.title = @"Line";
    pageController.menuViewStyle = MHMenuViewStyleLine;
    pageController.titleSizeSelected = 15;
} else if ([self.styles[indexPath.row] isEqualToString:@"MHMenuViewStyleFlood"]) {
    // 涌入
    pageController = [self pageControllerStyleFlood];
    pageController.title = @"Flood";
    // 传值 / KVC 第一个控制器是 Table / view / Collection
    pageController.values = @[@22, @{@"name":@"Mark", @"age": @22}, @"Mark"];
    pageController.keys = @[@"age", @"model",@"name"];
    //        pageController.viewFrame = CGRectMake(0, 100, 320, 400);
} else if ([self.styles[indexPath.row] isEqualToString:@"MHMenuViewStyleFloodHollow"]) {
    // 涌入/空心
    pageController.title = @"Hollow";
    pageController.menuViewStyle = MHMenuViewStyleFooldHollow;
    pageController.titleSizeSelected = 15;
}

- (MHPageController *)p_defaultController {
    NSMutableArray *viewControllers = [[NSMutableArray alloc] init];
    NSMutableArray *titles = [[NSMutableArray alloc] init];
    for (int i = 0; i < 10; i++) {
        Class vcClass;
        NSString *title;
        switch (i % 3) {
            case 0:
                vcClass = [MHTableViewController class];
                title = @"Greetings";
                break;
            case 1:
                vcClass = [MHViewController class];
                title = @"Hit Me";
                break;
            default:
                vcClass = [MHCollectionViewController class];
                title = @"Fluency";
                break;
        }
        [viewControllers addObject:vcClass];
        [titles addObject:title];
    }
    MHPageController *pageVC = [[MHPageController alloc] initWithViewControllerClasses:viewControllers andTheirTitles:titles];
    pageVC.pageAnimatable = YES;
    pageVC.menuItemWidth = 85;
    pageVC.postNotification = YES;
    pageVC.bounces = YES;
    return pageVC;
}

- (MHPageController *)pageControllerStyleFlood {
    NSArray *viewControllers = @[[MHTableViewController class], [MHViewController class], [MHCollectionViewController class]];
    NSArray *titles = @[@"通知", @"赞与感谢", @"私信"];
    
    MHPageController *pageVC = [[MHPageController alloc] initWithViewControllerClasses:viewControllers andTheirTitles:titles];
    pageVC.titleSizeSelected = 15;
    pageVC.pageAnimatable = YES;
    pageVC.menuViewStyle = MHMenuViewStyleFoold;
    pageVC.titleColorSelected = [UIColor whiteColor];
    pageVC.titleColorNormal = [UIColor colorWithRed:168.0/255.0 green:20.0/255.0 blue:4/255.0 alpha:1];
    pageVC.progressColor = [UIColor colorWithRed:168.0/255.0 green:20.0/255.0 blue:4/255.0 alpha:1];
    pageVC.itemsWidths = @[@(70),@(100),@(70)]; // 这里可以设置不同的宽度
    return pageVC;
}
*/

#endif /* MHUserShow_h */
