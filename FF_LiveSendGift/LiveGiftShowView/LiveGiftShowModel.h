//
//  LiveGiftShowModel.h
//  LiveSendGift
//
//  Created by Jonhory on 2016/11/11.
//  Copyright © 2016年 com.wujh. All rights reserved.
//  包含用户信息和礼物信息

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LiveGiftListModel.h"
#import "LiveUserModel.h"

@interface LiveGiftShowModel : NSObject

@property (nonatomic ,strong) LiveGiftListModel * giftModel;

@property (nonatomic ,strong) LiveUserModel * user;

@property (nonatomic, assign) NSUInteger currentNumber;/** 当前送礼数量 */

///要显示的数字 默认为0 累加1  如果大于0 就直接显示这个数字不累加
@property (nonatomic, assign) NSUInteger showNumber;/** 直接显示的数量 */

// 连续动画时使用
@property (nonatomic, assign) NSUInteger toNumber;/** 连续增加的数量 */
@property (nonatomic, assign) CGFloat interval;/** 连续增加时动画间隔 */
@property (nonatomic, strong) dispatch_source_t animatedTimer;

+ (instancetype)giftModel:(LiveGiftListModel *)giftModel userModel:(LiveUserModel *)userModel;

@end
