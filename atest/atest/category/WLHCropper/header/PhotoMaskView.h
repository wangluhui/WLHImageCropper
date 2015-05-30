//
//  PhotoMaskView.h
//  incup
//
//  Created by wanglh on 15/5/21.
//  Copyright (c) 2015年 Kule Yang. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, PhotoMaskViewMode) {
    PhotoMaskViewModeCircle, // default
    PhotoMaskViewModeSquare  // square
};


@protocol PhotoMaskViewDelegate<NSObject>

- (void)layoutScrollViewWithRect:(CGRect) rect;

@end
@interface PhotoMaskView : UIView
@property (nonatomic, weak) id<PhotoMaskViewDelegate>  delegate;
@property (nonatomic,assign) PhotoMaskViewMode mode;
@property (nonatomic,assign) CGFloat cropWidth;
@property (nonatomic,strong) UIColor *lineColor; // 线条颜色
@property (nonatomic,assign) BOOL    isDark; // 是否为虚线 default is NO
@end
