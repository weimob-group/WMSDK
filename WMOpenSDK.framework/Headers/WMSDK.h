//
//  WMSDK.h
//  WMSDKDemo
//
//  Created by fhkvsou on 2018/12/3.
//  Copyright © 2018年 fhkvsou. All rights reserved11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMConfig;

@interface WMSDK : NSObject

// 正在使用的 appTicket
@property (nonatomic, readonly, nullable) NSString * appTicket;

// SDK 的配置
@property (nonatomic, readonly) WMConfig * config;

// SDK 版本号
@property (nonatomic, readonly) NSString * version;

+ (instancetype)shared;

/**
 初始化 SDK.
 @param config 初始化配置。
 */
- (void)initSDKWithConfig:(WMConfig *)config;

/**
 授权信息。
 
 您的 App 服务器向微盟服务器发起登陆请求.
 微盟服务器处理后，将appTicket返回到您的 App 服务器，您的 App 服务器再将相关信息返回给您的 App.
 当 App 拿到这些信息后，需要调用此方法，将授权信息给 SDK.
 
 @param ticket appticket
 */
- (void)synchronizeAppTicket:(NSString *)ticket;

/**
 APP用户登出,清除ticket
 */
- (void)logout;

@end

NS_ASSUME_NONNULL_END
