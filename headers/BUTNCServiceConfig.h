//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BUTNCServiceConfig : NSObject
{
    NSString *_appKey;
    NSString *_tncPath;
    NSArray *_tncDomains;
    CDUnknownBlockType _tncRequestParam;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSArray *tncDomains; // @synthesize tncDomains=_tncDomains;
@property(copy, nonatomic) NSString *tncPath; // @synthesize tncPath=_tncPath;
@property(copy, nonatomic) CDUnknownBlockType tncRequestParam; // @synthesize tncRequestParam=_tncRequestParam;

@end

