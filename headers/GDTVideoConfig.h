//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTVideoConfig : NSObject
{
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    _Bool _autoResumeEnable;
    _Bool _detailPageEnable;
    _Bool _userControlEnable;
    _Bool _progressViewEnable;
    _Bool _coverImageEnable;
    long long _autoPlayPolicy;
}

@property(nonatomic) long long autoPlayPolicy; // @synthesize autoPlayPolicy=_autoPlayPolicy;
@property(nonatomic) _Bool autoResumeEnable; // @synthesize autoResumeEnable=_autoResumeEnable;
@property(nonatomic) _Bool coverImageEnable; // @synthesize coverImageEnable=_coverImageEnable;
@property(nonatomic) _Bool detailPageEnable; // @synthesize detailPageEnable=_detailPageEnable;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
- (id)init;
@property(nonatomic) _Bool progressViewEnable; // @synthesize progressViewEnable=_progressViewEnable;
@property(nonatomic) _Bool userControlEnable; // @synthesize userControlEnable=_userControlEnable;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;

@end

