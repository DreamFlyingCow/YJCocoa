//
//  YJUIPageView.h
//  YJUIPageView
//
//  HomePage:https://github.com/937447974/YJCocoa
//  YJ技术支持群:557445088
//
//  Created by 阳君 on 16/4/27.
//  Copyright © 2016年 YJCocoa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YJUIPageViewCell.h"

NS_ASSUME_NONNULL_BEGIN

/** 缓存 cell 的策略*/
typedef NS_ENUM(NSInteger, YJUIPageViewCellCache) {
    YJUIPageViewCellCacheDefault,///< 根据类缓存
    YJUIPageViewCellCacheIndex,  ///< 根据位置缓存
};

@protocol YJUITableViewManagerDelegate

/** page view*/
@interface YJUIPageView : UIView

@property (nonatomic) BOOL isLoop;           ///< 是否循环展示、默认NO不循环
@property (nonatomic) BOOL isDisableScrool;  ///< 是否取消用户手势滚动
@property (nonatomic) BOOL isDisableBounces; ///< 是否取消阻力效果（YES时，isLoop自动设为NO）

@property (nonatomic) NSTimeInterval timeInterval; ///< 轮播转动时间间隔（0停止；>0时开启，自动设置isLoop=YES,isDisableBounces=NO）
@property (nonatomic) BOOL isTimeLoopAnimatedStop; ///< 轮播时，是否动画切换（默认NO，开启动画切换）

@property (nonatomic, strong) NSMutableArray<YJUIPageViewCellObject *> *dataSource; ///< 数据源

@property (nonatomic, strong, readonly) UIPageViewController *pageVC; ///< 显示的UIPageViewController

@property (nonatomic, strong) NSMutableDictionary<NSNumber *, YJUIPageViewCell*> *pageCache; ///< 页面缓存


@end

NS_ASSUME_NONNULL_END
