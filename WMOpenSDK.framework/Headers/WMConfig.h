//
//  WMConfig.h
//  WMSDKDemo
//
//  Created by fhkvsou on 2018/12/3.
//  Copyright © 2018年 fhkvsou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//  SDK 配置
@interface WMConfig : NSObject

// App 的 Scheme
// ps.微信支付完成返回app scheme域名的问题,scheme必须以xx.n.weimob.com结尾
@property (nonatomic, copy, nullable) NSString * scheme;

@end

NS_ASSUME_NONNULL_END
