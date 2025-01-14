//
//  LFY_RemoveBindingPopView.h
//  YSTNewGreatWallMedium
//
//  Created by YSTLFY on 2017/12/19.
//  Copyright © 2017年 zhubiao. All rights reserved.
//  删除弹出框(上下文字,两个按钮)

#import <UIKit/UIKit.h>
@interface PJ_DeletePopView : UIView

/**
 弹出视图

 @param title 最上面标题
 @param subTile 第二行标题
 @param leftBtnTitle 左边按钮标题
 @param rightBtnTitle 右边按钮标题
 @param btnClickBlock 左右按钮点击时的blcok
 @return 视图
 */
- (instancetype)initWithTitle:(NSString *)title subTile:(NSString *)subTile leftBtnTitle:(NSString *)leftBtnTitle rightBtnTitle:(NSString *)rightBtnTitle clickBlock:(void(^)(NSInteger clickIndex)) btnClickBlock;

/**
 视图出现
 */
-(void)show;

/**
 视图消失
 */
-(void)dismiss;

@end
