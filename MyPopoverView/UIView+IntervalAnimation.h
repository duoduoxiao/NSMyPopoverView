//
//  UIView+IntervalAnimation.h
//  HeiSheHui
//
//  Created by LeslieChen on 15/3/10.
//  Copyright (c) 2015年 ED. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MacroDef.h"

@interface UIView (IntervalAnimation)

@property(nonatomic) BOOL onlyAnimatedSelf;

- (NSArray *)needAnimatedViewsForShow:(BOOL)show context:(id)context;
- (NSArray *)needAnimatedViewsWithDirection:(MyMoveAnimtedDirection)moveAnimtedDirection
                                    forShow:(BOOL)show
                                    context:(id)context;

@end
