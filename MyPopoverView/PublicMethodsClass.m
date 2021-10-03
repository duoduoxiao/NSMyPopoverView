//
//  PublicMethodsClass.m
//  TextCustomServiceDemo
//
//  Created by 钱伟龙 on 2017/3/13.
//  Copyright © 2017年 duoduo. All rights reserved.
//

#import "PublicMethodsClass.h"

@implementation PublicMethodsClass


+ (float)systemVersion{
    static float version = 0.f;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        NSArray * components = [[[UIDevice currentDevice] systemVersion] componentsSeparatedByString:@"."];
        
        NSInteger count = components.count;
        if (count >= 2) {
            NSMutableString * versionStr = [NSMutableString stringWithFormat:@"%@.",[components firstObject]];
            for (NSInteger i = 1; i < count; ++ i) {
                [versionStr appendString:components[i]];
            }
            version = [versionStr floatValue];
        }else {
            version = [[components firstObject] integerValue];
        }
    });
    
    return version;
}

+(BOOL)isNeedShowCollectionUpdateToday{
    NSDate *now = [NSDate date];
    NSDate *agoDate = [[NSUserDefaults standardUserDefaults] objectForKey:@"nowDate"];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    NSString *ageDateString = [dateFormatter stringFromDate:agoDate];
    NSString *nowDateString = [dateFormatter stringFromDate:now];
    if ([ageDateString isEqualToString:nowDateString]) {
        return NO;
    }
    else{
        return YES;
    }
}

+ (void)updateCollectionUpdateDate{
    NSDate *nowDate = [NSDate date];
    NSUserDefaults *dataUser = [NSUserDefaults standardUserDefaults];
    [dataUser setObject:nowDate forKey:@"nowDate"];
    [dataUser synchronize];
}

@end
