//
//  NSObject+GABackgroundMonitoring.h
//  GAPlayer
//
//  Created by 宫傲 on 2018/11/14.
//  Copyright © 2018年 宫傲. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^BackgroundMonitoringBlock)(BOOL isBackground);

@interface NSObject (GABackgroundMonitoring)

/**
 注册进入后台 进入前台事件
 */
- (void)registergroundBlock:(void(^)(BOOL isBackground))monitoringBlock;

/**
 继续前后台监听
 */
- (void)resumegroundListen;

/**
 暂停前后台监听
 */
- (void)pausegroundListen;

@end

NS_ASSUME_NONNULL_END
