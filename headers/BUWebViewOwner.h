//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUWKWebViewClient;

@interface BUWebViewOwner : NSObject
{
    _Bool _isCache;
    BUWKWebViewClient *_webViewClient;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWebViewClient:(id)arg1 isCache:(_Bool)arg2;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) BUWKWebViewClient *webViewClient; // @synthesize webViewClient=_webViewClient;

@end

