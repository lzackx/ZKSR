//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADRenderedAdCacheEntry, GADServerRequest, GADServerResponse;

@interface GADServerTransaction : NSObject
{
    GADServerRequest *_serverRequest;
    GADServerResponse *_serverResponse;
    GADRenderedAdCacheEntry *_renderedAdCacheEntry;
}

- (void).cxx_destruct;
- (id)initWithServerRequest:(id)arg1 serverResponse:(id)arg2;
@property(retain, nonatomic) GADRenderedAdCacheEntry *renderedAdCacheEntry; // @synthesize renderedAdCacheEntry=_renderedAdCacheEntry;
@property(readonly, nonatomic) GADServerRequest *serverRequest;
@property(readonly, nonatomic) GADServerResponse *serverResponse;

@end

