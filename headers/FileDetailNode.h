//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FileDetailNode : NSObject
{
    _Bool _fileIsUsable;
    NSString *_fileID;
    NSString *_fullPath;
    long long _fileSize;
    long long _fileDownloaded;
}

- (void).cxx_destruct;
@property(nonatomic) long long fileDownloaded; // @synthesize fileDownloaded=_fileDownloaded;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) _Bool fileIsUsable; // @synthesize fileIsUsable=_fileIsUsable;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
- (id)init;

@end

