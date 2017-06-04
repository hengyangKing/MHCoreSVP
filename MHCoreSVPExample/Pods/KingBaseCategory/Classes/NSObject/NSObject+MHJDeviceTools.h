//
//  NSObject+MHJDeviceTools.h
//  musichome
//
//  Created by J on 2016/12/14.
//  Copyright © 2016年 J. All rights reserved.
//

#import <Foundation/Foundation.h>

//机型枚举
typedef NS_ENUM(NSInteger,MHJDeviceType){
    iphone4and4s=0,
    iphone5and5sandiphoneSE=1,
    iphone6and6sand7=2,
    iphone6plusandiphone6splusand7plus=3,
};
@interface NSObject (MHJDeviceTools)
/**
 *  返回系统号
 *
 */
-(double)getSelfDevice;
/**
 *  返回用户机型
 */
-(MHJDeviceType)getDeviceModel;


/**
 返回机器统一标识
 */
-(NSString *)ADID;


/**
 返回version
 */
-(NSString *)MHJVersion;

@end
