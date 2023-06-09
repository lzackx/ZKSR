//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHTTPRequestSerializer, AFHTTPSessionManager, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface KSYD_ComicDownLoadManager : NSObject
{
    NSString *_book_id;
    NSString *_booKMD5ID;
    long long _update_at;
    AFHTTPSessionManager *_manager;
    AFHTTPRequestSerializer *_serializer;
    NSMutableArray *_tasksArray;
    NSObject<OS_dispatch_semaphore> *_tasksLock;
    NSObject<OS_dispatch_semaphore> *_imageLock;
    NSMutableArray *_imagesArray;
    NSOperationQueue *_coderQueue;
}

- (void).cxx_destruct;
- (void)AFDownLoadFileWithpath:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSString *booKMD5ID; // @synthesize booKMD5ID=_booKMD5ID;
@property(copy, nonatomic) NSString *book_id; // @synthesize book_id=_book_id;
- (void)cancleDownLoadFile;
- (void)cancleDownLoadFileWithPath:(id)arg1;
- (_Bool)checkFileIsDownload:(id)arg1 update_at:(long long)arg2 chapterPath:(id)arg3;
@property(retain, nonatomic) NSOperationQueue *coderQueue; // @synthesize coderQueue=_coderQueue;
- (void)dealloc;
- (id)getImageDataWithPath:(id)arg1;
- (id)getImageWithPath:(id)arg1;
- (id)getImageWithPath:(id)arg1 isCell:(_Bool)arg2;
- (id)getLocalFilePathWithFileName:(id)arg1 update_at:(long long)arg2 chapterPath:(id)arg3;
- (id)getSaveLocalFilePathWithFileName:(id)arg1 update_at:(long long)arg2 chapterPath:(id)arg3;
- (id)getTempFilePathWithFileName:(id)arg1 update_at:(long long)arg2 chapterPath:(id)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *imageLock; // @synthesize imageLock=_imageLock;
@property(retain, nonatomic) NSMutableArray *imagesArray; // @synthesize imagesArray=_imagesArray;
- (id)init;
@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
- (id)pathWithFileName:(id)arg1 update_at:(long long)arg2 chapterPath:(id)arg3 isLocal:(_Bool)arg4;
- (id)pathWithUpdate_at:(long long)arg1 chapterPath:(id)arg2 isLocal:(_Bool)arg3;
@property(retain, nonatomic) AFHTTPRequestSerializer *serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSMutableArray *tasksArray; // @synthesize tasksArray=_tasksArray;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tasksLock; // @synthesize tasksLock=_tasksLock;
@property(nonatomic) long long update_at; // @synthesize update_at=_update_at;

@end

