//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface GDTMediaDownloaderStatus : NSObject
{
    NSMutableSet *_downloadingURLS;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)addURL:(id)arg1;
- (_Bool)containsURL:(id)arg1;
@property(retain, nonatomic) NSMutableSet *downloadingURLS; // @synthesize downloadingURLS=_downloadingURLS;
- (void)removeURL:(id)arg1;
- (id)urls;

@end

