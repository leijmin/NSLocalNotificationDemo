//
//  NSObject+NSLocalNotification.h
//  NSLocalNotificationDemo
//
//  Created by release on 16/5/21.
//  Copyright © 2016年 FuRui. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (NSLocalNotification)


/**
 *   注册通知
 */
+ (void)registerLocalNotification:(NSInteger)alertTime string:(NSString *)string key:(NSString *)key;


/**
 *   取消通知
 */
+ (void)cancelLocalNotificationWithKey:(NSString *)key;

@end
