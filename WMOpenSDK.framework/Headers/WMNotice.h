//
//  WMNotice.h
//  WMSDKDemo
//
//  Created by fhkvsou on 2018/12/3.
//  Copyright © 2018年 fhkvsou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WMNoticeType) {
    WMNoticeTypeOther = 0,         // 其他通知，用户无需关心
    WMNoticeTypeLogin,             // 登录失效
};

@interface WMNotice : NSObject

// notice 类型
@property (assign, nonatomic) WMNoticeType type;

// 通知附带的数据
@property (nullable, strong, nonatomic) id response;

@end

NS_ASSUME_NONNULL_END
