//
//  MacroDef.h
//  TextCustomServiceDemo
//
//  Created by 钱伟龙 on 2017/3/16.
//  Copyright © 2017年 duoduo. All rights reserved.
//

#ifndef MacroDef_h
#define MacroDef_h

#import <AdSupport/AdSupport.h>
#import "PublicMethodsClass.h"

/*
 * 常用的宏定义
 */

//系统版本
#define SystemVersion                           [PublicMethodsClass systemVersion]

//大于等于_version系统
#define GreaterThanSystem(_version)             (SystemVersion >= (_version))
//iOS7以上的系统
#define GreaterThanIOS7System                   GreaterThanSystem(7.f)
//iOS8以上的系统
#define GreaterThanIOS8System                   GreaterThanSystem(8.f)
//iOS9以上的系统
#define GreaterThanIOS9System                   GreaterThanSystem(9.f)
//iOS10以上的系统
#define GreaterThanIOS10System                  GreaterThanSystem(10.f)

#define ImageWithName(_name)  [UIImage imageNamed:(_name)]

//获取设备的UUID
#define CurrentDeviceAdUID() [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString]


/**
    颜色定义
 */
#define ColorGray_EEEEEE   [UIColor colorWithHexString:@"#EEEEEE"]
#define ColorGray_AAAAAA   [UIColor colorWithHexString:@"#AAAAAA"]
#define ColorBlack_000000  [UIColor colorWithHexString:@"#000000"]
#define ColorGreen_00dc82   [UIColor colorWithHexString:@"#00dc82"]
#define ColorWhite_ffffff           [UIColor colorWithHexString:@"#ffffff"]
#define ColorBack_ececec        [UIColor colorWithHexString:@"#ececec"]

#define ColorText_000F0F        [UIColor colorWithHexString:@"#000F0F"]
#define ColorText_364c68        [UIColor colorWithHexString:@"#364c68"]
#define ColorText_3F4F67        [UIColor colorWithHexString:@"#3F4F67"]
#define ColorText_666666        [UIColor colorWithHexString:@"#666666"]
#define ColorText_333333        [UIColor colorWithHexString:@"#333333"]
#define ColorText_AAAAAA      [UIColor colorWithHexString:@"#AAAAAA"]
#define ColorText_151515        [UIColor colorWithHexString:@"#151515"]
#define ColorText_999999        [UIColor colorWithHexString:@"#999999"]
#define ColorText_FF2121        [UIColor colorWithHexString:@"#FF2121"]
#define ColorText_FF0000        [UIColor colorWithHexString:@"#FF0000"]
#define ColorText_F39800        [UIColor colorWithHexString:@"#F39800"]
#define ColorText_8E8E93         [UIColor colorWithHexString:@"#8E8E93"]
#define ColorText_FC6E00        [UIColor colorWithHexString:@"#FC6E00"]
#define ColorText_F77501        [UIColor colorWithHexString:@"#F77501"]
#define ColorText_FF7373        [UIColor colorWithHexString:@"#FF7373"]
#define ColorText_6D6E71        [UIColor colorWithHexString:@"#6D6E71"]
#define ColorText_FC6E00        [UIColor colorWithHexString:@"#FC6E00"]

#define ColorBack_FAFAFA        [UIColor colorWithHexString:@"#FAFAFA"]
#define ColorBack_34384A        [UIColor colorWithHexString:@"#34384A"]
#define ColorBack_EEEEEE        [UIColor colorWithHexString:@"#EEEEEE"]
#define ColorBack_FEFFE4        [UIColor colorWithHexString:@"#FEFFE4"]
#define ColorBack_F4F4F4        [UIColor colorWithHexString:@"#F4F4F4"]
#define ColorBack_FFF390        [UIColor colorWithHexString:@"#FFF390"]
#define ColorBack_FBCB32        [UIColor colorWithHexString:@"#FBCB32"]
#define ColorBack_2AA6E9        [UIColor colorWithHexString:@"#2AA6E9"]
#define ColorBack_F77501         [UIColor colorWithHexString:@"#F77501"]
#define ColorBack_FFFACC        [UIColor colorWithHexString:@"#FFFACC"]
#define ColorBack_475462        [UIColor colorWithHexString:@"#475462"]
#define ColorBack_55A0FF        [UIColor colorWithHexString:@"#55A0FF"]
#define ColorBack_1986FF         [UIColor colorWithHexString:@"#1986FF"]
#define ColorBack_BDBDBD        [UIColor colorWithHexString:@"#BDBDBD"]
#define ColorBack_F5F5F5        [UIColor colorWithHexString:@"#F5F5F5"]
#define ColorBack_44505E        [UIColor colorWithHexString:@"#44505E"]

#define ColorLine_CCCCCC [UIColor colorWithHexString:@"#CCCCCC"]
#define ColorLine_979797    [UIColor colorWithHexString:@"#979797"]
#define ColorLine_F8F8F8        [UIColor colorWithHexString:@"#F8F8F8"]

/**
    字体定义
 */

#define FontTypePingFangMe   SystemVersion<9.0?@"Heiti SC":@"PingFangSC-Medium"
#define FontTypePingFangRe   SystemVersion<9.0?@"Heiti SC":@"PingFangSC-Regular"
#define FontTypePingFangSe     SystemVersion<9.0?@"Heiti SC":@"PingFangSC-Semibold"
#define FontTypePingFangLi      SystemVersion<9.0?@"Heiti SC":@"PingFangSC-Light"

//单行文本尺寸
#define TEXTSIZE(text, font)   \
([text length] > 0 ? [text sizeWithAttributes:@{NSFontAttributeName:font}] : CGSizeZero)

//颜色创建
#define ColorWithRGBA(int_r,int_g,int_b,_alpha)  \
[UIColor colorWithRed:(int_r)/255.0 green:(int_g)/255.0 blue:(int_b)/255.0 alpha:_alpha]

//通过数字初始化颜色
#define ColorWithNumberRGBA(_hex,_alpha) ColorWithRGBA(((_hex)>>16)&0xFF,((_hex)>>8)&0xFF,(_hex)&0xFF,_alpha)
#define ColorWithNumberRGB(_hex) ColorWithNumberRGBA(_hex,1.f)

#define ColorWithWhite(int_w,_alpha) [UIColor colorWithWhite:(int_w)/255.0 alpha:_alpha]
#define BlackColorWithAlpha(_alpha) ColorWithWhite(0,_alpha)

#define __ContentsRectForRect_IMP__(_contentRect,_rect,L) \
({ \
CGRect __NSX_PASTE__(__rect,L) = _rect; \
CGRect __NSX_PASTE__(__contentRect,L) = _contentRect; \
CGFloat __NSX_PASTE__(__width,L) = CGRectGetWidth(__NSX_PASTE__(__rect,L));  \
CGFloat __NSX_PASTE__(__height,L) = CGRectGetHeight(__NSX_PASTE__(__rect,L)); \
CGRectMake(__NSX_PASTE__(__width,L)  ? CGRectGetMinX(__NSX_PASTE__(__contentRect,L)) / __NSX_PASTE__(__width,L) : 0.f,    \
__NSX_PASTE__(__height,L) ? CGRectGetMinY(__NSX_PASTE__(__contentRect,L)) / __NSX_PASTE__(__height,L) : 0.f,   \
__NSX_PASTE__(__width,L)  ? CGRectGetWidth(__NSX_PASTE__(__contentRect,L)) / __NSX_PASTE__(__width,L) : 0.f,   \
__NSX_PASTE__(__height,L) ? CGRectGetHeight(__NSX_PASTE__(__contentRect,L)) / __NSX_PASTE__(__height,L) : 0.f);\
})
#define ContentsRectForRect(_contentRect,_rect) __ContentsRectForRect_IMP__(_contentRect,_rect,__COUNTER__)

typedef NS_ENUM(int,MyMoveAnimtedDirection) {
    MyMoveAnimtedDirectionUp,
    MyMoveAnimtedDirectionDown,
    MyMoveAnimtedDirectionLeft,
    MyMoveAnimtedDirectionRight
};

#define ifRespondsSelector(_obj,_sel)  if (_obj&&[(NSObject *)_obj respondsToSelector:_sel])

#endif /* MacroDef_h */
