//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase;

@interface KSYD_DataBaseManager : NSObject
{
    Class _cls;
    WCTDatabase *_wcdb;
    NSString *_dataBasePath;
    NSString *_mDataBaseName;
    NSString *_mTableName;
}

+ (id)wcdbWithModel:(id)arg1;
- (void).cxx_destruct;
- (_Bool)beginTransaction;
- (void)checkOperationTableName:(id)arg1;
- (_Bool)commitTransaction;
- (void)configurationParameter;
- (id)configurationTableName:(id)arg1;
- (_Bool)createTableWithDBModel:(id)arg1;
- (id)createTableWithModel:(id)arg1;
@property(retain, nonatomic) NSString *dataBasePath; // @synthesize dataBasePath=_dataBasePath;
@property(readonly, nonatomic) NSString *databaseName;
- (_Bool)deleteAllObjectsFromTable:(id)arg1;
- (_Bool)deleteObjectsFromTable:(id)arg1 where:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsFromTableName:(id)arg1 where:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1;
- (_Bool)deleteTable;
- (id)getAllObjectsForTable:(id)arg1;
- (unsigned long long)getFileSize;
- (id)getObjectsForTable:(id)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getObjectsForTable:(id)arg1 where:(const struct WCTExpr *)arg2;
- (id)getObjectsForTable:(id)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneObjectFromTable:(id)arg1;
- (id)getOneObjectFromTable:(id)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getOneObjectFromTable:(id)arg1 where:(const struct WCTExpr *)arg2;
- (id)getOneObjectFromTable:(id)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 where:(const struct WCTExpr *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (id)getOneRowOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneRowOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 where:(const struct WCTExpr *)arg3;
- (id)getOneRowOnResults:(const struct WCTResultList *)arg1 formTable:(id)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (id)getOneRowOnResults:(const struct WCTResultList *)arg1 fromTable:(id)arg2;
- (id)getPaths;
- (id)initWCDBWithName:(id)arg1;
- (id)initWCDBWithPath:(id)arg1;
- (_Bool)insertObject:(id)arg1;
- (_Bool)insertObject:(id)arg1 into:(id)arg2;
- (_Bool)insertObject:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 into:(id)arg3;
- (_Bool)insertObjects:(id)arg1 into:(id)arg2;
- (_Bool)insertObjects:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 into:(id)arg3;
- (_Bool)insertOrReplaceObject:(id)arg1 into:(id)arg2;
- (_Bool)insertOrReplaceObject:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 into:(id)arg3;
- (_Bool)insertOrReplaceObjects:(id)arg1 into:(id)arg2;
- (_Bool)insertOrReplaceObjects:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 into:(id)arg3;
- (_Bool)insertOrReplaceObjectsInTransaction:(id)arg1 into:(id)arg2;
- (_Bool)isExistTableWithName:(id)arg1;
- (_Bool)isOpenWCDBDataBase;
@property(copy, nonatomic) NSString *mDataBaseName; // @synthesize mDataBaseName=_mDataBaseName;
@property(copy, nonatomic) NSString *mTableName; // @synthesize mTableName=_mTableName;
- (_Bool)rollbackTransaction;
- (id)selectMutableObjectsOnResults:(const struct WCTResultList *)arg1 fromTables:(id)arg2 where:(const struct WCTExpr *)arg3;
- (id)selectRowsOnResults:(const struct WCTResultList *)arg1 fromTables:(id)arg2 where:(const struct WCTExpr *)arg3;
@property(retain, nonatomic) NSString *tableName;
- (void)setTableWithModel:(id)arg1;
@property(retain, nonatomic) WCTDatabase *wcdb; // @synthesize wcdb=_wcdb;
- (_Bool)updateAllRowsInTable:(id)arg1 onProperty:(const struct WCTProperty *)arg2 withValue:(id)arg3;
- (_Bool)updateAllRowsInTable:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 withRow:(id)arg3;
- (_Bool)updateRowsInTable:(id)arg1 onValue:(const struct WCTProperty *)arg2 withObject:(id)arg3;
- (_Bool)updateRowsInTable:(id)arg1 onValue:(const struct WCTProperty *)arg2 withObject:(id)arg3 where:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsInTable:(id)arg1 onValues:(const struct WCTPropertyList *)arg2 withObject:(id)arg3 where:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsWithValue:(const struct WCTProperty *)arg1 onObject:(id)arg2;

@end

