//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class UIPanGestureRecognizer;

@interface WKWebView (QWFullScreenPopGesture)
+ (void)load;
+ (void)swizzleInstanceMethodWithOriginSel:(SEL)arg1 swizzledSel:(SEL)arg2;
- (void)checkGestureIsAdded;
@property(readonly, nonatomic) UIPanGestureRecognizer *qw_fullscreenPopGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *qw_fullscreenRightPopGestureRecognizer;
- (id)qw_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)qw_loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)qw_loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)qw_loadRequest:(id)arg1;
- (id)qw_popGestureRecognizerDelegate;
@end

