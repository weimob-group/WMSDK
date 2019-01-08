//
//  WMWebView.h
//  WMSDKTextDemo
//
//  Created by fhkvsou on 2018/12/4.
//  Copyright © 2018年 fhkvsou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMWebViewProtocal.h"

NS_ASSUME_NONNULL_BEGIN

@class WMNotice,WMWebView;
@protocol WMNoticeDelegate <NSObject>

- (void)webView:(WMWebView * )webView didReceiveNotice:(WMNotice *)notice;

@end

@interface WMWebView : UIView<WMWebView,WMWebViewDelegate>

@property (nonatomic, weak) id<WMNoticeDelegate> noticeDelegate;

@end

NS_ASSUME_NONNULL_END
