//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppleStoreModel : NSObject
{
    NSString *_version;
    NSString *_releaseNotes;
    NSString *_currentVersionReleaseDate;
    NSString *_trackViewUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentVersionReleaseDate; // @synthesize currentVersionReleaseDate=_currentVersionReleaseDate;
@property(copy, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property(copy, nonatomic) NSString *trackViewUrl; // @synthesize trackViewUrl=_trackViewUrl;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;

@end

