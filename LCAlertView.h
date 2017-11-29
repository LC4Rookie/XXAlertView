//
//  LCAlertView.h
//  aaaaa
//
//  Created by Apple on 17/1/16.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 按钮响应事件

 @param index 下标
 */
typedef void(^LCActionHandler)(NSUInteger index);

@interface LCAlertView : UIAlertView

/**
 弹出提示框

 @param message 提示信息
 */
+ (void)showSingleAlertViewWithMessage:(NSString *)message;

/**
 弹出单一响应按钮提示框，点击返回响应事件
 
 @param message 提示信息
 @param actionTitle 按钮标题
 @param actionHandler 按钮响应事件
 */
+ (void)showSingleResponseAlertViewWithMessage:(NSString *)message
                                   actionTitle:(NSString *)actionTitle
                                 actionHandler:(LCActionHandler)actionHandler;

/**
 弹出提示框，点击返回下标

 @param type 提示框类型
 @param title 标题
 @param message 提示信息
 @param actionTitles 按钮标题
 @param actionHandler 按钮的响应事件
 */
+ (void)showAlertViewWithType:(UIAlertControllerStyle)type
                        title:(NSString *)title
                      message:(NSString *)message
                 actionTitles:(NSArray *)actionTitles
                actionHandler:(LCActionHandler)actionHandler;

@end
