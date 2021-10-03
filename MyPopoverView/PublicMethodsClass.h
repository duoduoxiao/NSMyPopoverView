//
//  PublicMethodsClass.h
//  TextCustomServiceDemo
//
//  Created by 钱伟龙 on 2017/3/13.
//  Copyright © 2017年 duoduo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PublicMethodsClass : NSObject

/**
 获取系统版本

 @return 返回版本数
 */
+ (float)systemVersion;


/**
 今天是否弹收藏提醒

 @return bool值
 */
+ (BOOL)isNeedShowCollectionUpdateToday;

+ (void)updateCollectionUpdateDate;

@end
