//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDTAdParams : NSObject
{
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    _Bool _enableSafeAreaInsets;
    _Bool _fullscreenClickable;
    long long _minVideoDuration;
    long long _maxVideoDuration;
    NSString *_threadId;
    long long _serverType;
    long long _adType;
    struct CGSize _adSize;
    struct CGSize _adSize2;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) struct CGSize adSize2; // @synthesize adSize2=_adSize2;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
@property(nonatomic) _Bool enableSafeAreaInsets; // @synthesize enableSafeAreaInsets=_enableSafeAreaInsets;
@property(nonatomic) _Bool fullscreenClickable; // @synthesize fullscreenClickable=_fullscreenClickable;
- (id)init;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;

@end
