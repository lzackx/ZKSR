//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTAdWKWebView, GDTJsRequest, NSError, WKNavigation;

@protocol GDTWebViewDelegate <NSObject>

@optional
- (_Bool)GDTfunctioni0vhEA:(GDTAdWKWebView *)arg1;
- (_Bool)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 GDTfunctionh6AJjU:(GDTJsRequest *)arg2;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)GDTfunctionm55QS3:(GDTAdWKWebView *)arg1 handleJsRequest:(GDTJsRequest *)arg2;
- (void)GDTfunctionq5xecT:(GDTAdWKWebView *)arg1;
- (void)GDTfunctiony3HbPY:(GDTAdWKWebView *)arg1;
@end

