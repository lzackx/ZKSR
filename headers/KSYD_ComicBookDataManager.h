//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSYD_ComicBookModel, KSYD_DataBaseManager;

@interface KSYD_ComicBookDataManager : NSObject
{
    KSYD_DataBaseManager *_manager;
    KSYD_ComicBookModel *_bookModel;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_ComicBookModel *bookModel; // @synthesize bookModel=_bookModel;
- (_Bool)createBookDetailTable;
- (_Bool)deleteAllObjectsFromTable:(id)arg1;
- (void)deleteObjectFromBookDetailModelWithBookId:(id)arg1;
- (id)getAllBookForTable;
- (id)getAllObjectsForTable:(id)arg1;
- (id)getAllObjectsForTableOderByRecently:(id)arg1;
- (id)getAllObjectsForTableOderByUpdateTime:(id)arg1;
- (id)getBookDetailModelWithBookModel:(id)arg1;
- (unsigned long long)getFileSize;
- (id)getOneObjectFromBookeDetailModelWithBookModel:(id)arg1;
- (id)getPaths;
- (id)getRecordWithBookDetail:(id)arg1;
- (id)insertObjectIntoBookDetailModelWithObject:(id)arg1;
- (void)insertObjectsIntoBookDetailModelWithBookArr:(id)arg1;
@property(retain, nonatomic) KSYD_DataBaseManager *manager; // @synthesize manager=_manager;
- (id)removeObjectIntoBookDetailModelWithObject:(id)arg1;
- (void)removeObjectsIntoBookDetailModelWithBookArr:(id)arg1;
- (_Bool)saveRecordWithBookDetailModel:(id)arg1 andRecord:(id)arg2;
- (_Bool)updateHasUpdatedWithBook:(id)arg1;
- (id)updateObjectIntoBookDetailModelWithObject:(id)arg1;
- (void)updateObjectsIntoBookDetailModelWithBookArr:(id)arg1;

@end

