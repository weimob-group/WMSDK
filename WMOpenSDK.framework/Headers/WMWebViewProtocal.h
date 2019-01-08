//
//  WMWebViewProtocal.h
//  WMSDKTextDemo
//
//  Created by fhkvsou on 2018/12/4.
//  Copyright © 2018年 fhkvsou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WMWebView;
@protocol WMWebViewDelegate <NSObject>

@optional

- (BOOL)webView:(WMWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;
- (void)webViewDidStartLoad:(WMWebView *)webView;
- (void)webViewDidFinishLoad:(WMWebView *)webView;
- (void)webView:(WMWebView *)webView didFailLoadWithError:(NSError *)error;

@end

@protocol WMWebView <NSObject>

/**
 代理对象，实现它来监听 WMNotice, 在得到对应通知的时候，做对应的操作。
 */
@property (nonatomic, weak, nullable) id<WMWebViewDelegate> delegate;

@property (nonatomic, strong, readonly) UIScrollView *scrollView;
@property (nonatomic, assign, readonly,getter=isLoading) BOOL loading;
@property (nonatomic, assign, readonly) BOOL canGoBack;
@property (nonatomic, assign, readonly) BOOL canGoForward;

@property (nonatomic, assign) BOOL scalesPageToFit;

- (void)loadRequest:(NSURLRequest *)request;
- (void)loadHTMLString:(NSString *)string baseURL:(nullable NSURL *)baseURL;

- (void)reload;
- (void)stopLoading;

- (void)goBack;
- (void)goForward;

- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)javaScriptString;

@end

NS_ASSUME_NONNULL_END
