//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XHLaunchAdDownloader;

@interface XHLaunchAdImageManager : NSObject
{
    XHLaunchAdDownloader *_downloader;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) XHLaunchAdDownloader *downloader; // @synthesize downloader=_downloader;
- (id)init;
- (void)loadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;

@end

