//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADWebViewController, NSError, NSURLRequest;

@protocol GADWebViewControllerDelegate <NSObject>
- (void)webViewController:(GADWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewController:(GADWebViewController *)arg1 openNewTabWithRequest:(NSURLRequest *)arg2;
- (void)webViewControllerDidFinishLoad:(GADWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(GADWebViewController *)arg1;
- (void)webViewControllerWebContentProcessDidTerminate:(GADWebViewController *)arg1;

@optional
- (_Bool)webViewController:(GADWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

