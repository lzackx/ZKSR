//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSYD_ComicBookModel, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface KSYD_ComicChapterManager : NSObject
{
    _Bool _isOpenChapterAd;
    _Bool _isOpenPageAd;
    unsigned long long _scrollDirection;
    NSMutableArray *_catalogArr;
    NSMutableArray *_dataArray;
    long long _chapter_id;
    KSYD_ComicBookModel *_bookModel;
    long long _chapterAdCount;
    long long _scrollAdSwitch;
    long long _pageAdCount;
    long long _preCount;
    long long _nextCount;
    CDUnknownBlockType _NextChapterBlock;
    CDUnknownBlockType _PreChapterBlock;
    CDUnknownBlockType _BarrageBlock;
    long long _timeCode;
    CDUnknownBlockType _RefreshData;
    CDUnknownBlockType _ShowErrorBlock;
    NSMutableDictionary *_chapterDic;
    NSObject<OS_dispatch_semaphore> *_tasksLock;
    NSMutableDictionary *_barrageDic;
    NSObject<OS_dispatch_semaphore> *_barrageTasksLock;
    NSMutableArray *_adArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType BarrageBlock; // @synthesize BarrageBlock=_BarrageBlock;
- (_Bool)KSYD_checkBarrageChapter:(long long)arg1;
- (_Bool)KSYD_checkChapter:(long long)arg1;
- (void)KSYD_getBarrage:(long long)arg1;
- (void)KSYD_setBarrageChapter:(long long)arg1 isDel:(_Bool)arg2;
- (void)KSYD_setChapter:(long long)arg1 isDel:(_Bool)arg2;
@property(copy, nonatomic) CDUnknownBlockType NextChapterBlock; // @synthesize NextChapterBlock=_NextChapterBlock;
@property(copy, nonatomic) CDUnknownBlockType PreChapterBlock; // @synthesize PreChapterBlock=_PreChapterBlock;
@property(copy, nonatomic) CDUnknownBlockType RefreshData; // @synthesize RefreshData=_RefreshData;
@property(copy, nonatomic) CDUnknownBlockType ShowErrorBlock; // @synthesize ShowErrorBlock=_ShowErrorBlock;
@property(retain, nonatomic) NSMutableArray *adArray; // @synthesize adArray=_adArray;
@property(retain, nonatomic) NSMutableDictionary *barrageDic; // @synthesize barrageDic=_barrageDic;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *barrageTasksLock; // @synthesize barrageTasksLock=_barrageTasksLock;
@property(retain, nonatomic) KSYD_ComicBookModel *bookModel; // @synthesize bookModel=_bookModel;
- (_Bool)canShowAD:(id)arg1;
@property(retain, nonatomic) NSMutableArray *catalogArr; // @synthesize catalogArr=_catalogArr;
@property(nonatomic) long long chapterAdCount; // @synthesize chapterAdCount=_chapterAdCount;
@property(retain, nonatomic) NSMutableDictionary *chapterDic; // @synthesize chapterDic=_chapterDic;
@property(nonatomic) long long chapter_id; // @synthesize chapter_id=_chapter_id;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)downLoadChapterWithChapterIndex:(long long)arg1 isJump:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 ssuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)downLoadChapterWithChapterIndex:(long long)arg1 isJump:(_Bool)arg2 timeCode:(long long)arg3 progress:(CDUnknownBlockType)arg4 ssuccess:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
@property(nonatomic) _Bool isOpenChapterAd; // @synthesize isOpenChapterAd=_isOpenChapterAd;
@property(nonatomic) _Bool isOpenPageAd; // @synthesize isOpenPageAd=_isOpenPageAd;
- (void)loadChapter:(long long)arg1 isPre:(_Bool)arg2;
- (void)loadChapter:(long long)arg1 isPre:(_Bool)arg2 isAuto:(_Bool)arg3 isShowNext:(_Bool)arg4 ssuccess:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 loading:(CDUnknownBlockType)arg7;
- (void)loadChapter:(long long)arg1 isPre:(_Bool)arg2 isAuto:(_Bool)arg3 ssuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)loadChapter:(long long)arg1 isPre:(_Bool)arg2 isAuto:(_Bool)arg3 ssuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 loading:(CDUnknownBlockType)arg6;
- (void)loadChapter:(long long)arg1 isPre:(_Bool)arg2 isShowNext:(_Bool)arg3;
@property(nonatomic) long long nextCount; // @synthesize nextCount=_nextCount;
@property(nonatomic) long long pageAdCount; // @synthesize pageAdCount=_pageAdCount;
@property(nonatomic) long long preCount; // @synthesize preCount=_preCount;
- (void)reloadChapter:(long long)arg1;
- (void)resetChapterDic:(long long)arg1;
- (void)resetDataWitdModel:(id)arg1 chapter_id:(long long)arg2 isPre:(_Bool)arg3 isAuto:(_Bool)arg4;
@property(nonatomic) long long scrollAdSwitch; // @synthesize scrollAdSwitch=_scrollAdSwitch;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tasksLock; // @synthesize tasksLock=_tasksLock;
@property(nonatomic) long long timeCode; // @synthesize timeCode=_timeCode;
- (void)sortDataArray;

@end

