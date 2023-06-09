//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUAdSDKPlayableToolManager : NSObject
{
    _Bool _isLandScape;
    NSString *_playableURL;
    NSString *_downloadUrl;
    NSString *_deeplinkUrl;
}

+ (void)clearAll;
+ (void)setDeeplinkUrl:(id)arg1;
+ (void)setDownloadUrl:(id)arg1;
+ (void)setIsLandScape:(_Bool)arg1;
+ (void)setPlayableURL:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(copy, nonatomic) NSString *playableURL; // @synthesize playableURL=_playableURL;

@end

