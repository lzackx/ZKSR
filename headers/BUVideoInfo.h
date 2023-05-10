//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, NSURL;

@interface BUVideoInfo : NSObject <NSCoding>
{
    _Bool _isVideoPlaying;
    _Bool _video_backup;
    unsigned long long _encodeType;
    long long _coverHeight;
    long long _coverWidth;
    NSString *_coverUrl;
    NSString *_resolution;
    double _size;
    long long _videoDuration;
    NSString *_videoUrl;
    NSURL *_videoLocalURL;
    double _playedSeconds;
    NSString *_endcard;
    NSString *_playableZipUrl;
    NSString *_detailPage;
    NSString *_fileHash;
    long long _fallbackEndcardJudge;
    long long _video_preload_size;
}

- (void).cxx_destruct;
@property(nonatomic) long long coverHeight; // @synthesize coverHeight=_coverHeight;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) long long coverWidth; // @synthesize coverWidth=_coverWidth;
@property(copy, nonatomic) NSString *detailPage; // @synthesize detailPage=_detailPage;
- (id)dictionaryValue;
@property(nonatomic) unsigned long long encodeType; // @synthesize encodeType=_encodeType;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *endcard; // @synthesize endcard=_endcard;
@property(nonatomic) long long fallbackEndcardJudge; // @synthesize fallbackEndcardJudge=_fallbackEndcardJudge;
@property(copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool isVideoPlaying; // @synthesize isVideoPlaying=_isVideoPlaying;
@property(copy, nonatomic) NSString *playableZipUrl; // @synthesize playableZipUrl=_playableZipUrl;
@property(nonatomic) double playedSeconds; // @synthesize playedSeconds=_playedSeconds;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSURL *videoLocalURL; // @synthesize videoLocalURL=_videoLocalURL;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) _Bool video_backup; // @synthesize video_backup=_video_backup;
@property(nonatomic) long long video_preload_size; // @synthesize video_preload_size=_video_preload_size;
- (void)setupDataWithDictionary:(id)arg1;

@end

