//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EBAppLogDatabase, EBAppLogStatement, NSMutableDictionary, NSString;

@interface EBAppLogResultSet : NSObject
{
    EBAppLogDatabase *_parentDB;
    EBAppLogStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
- (void).cxx_destruct;
- (const char *)UTF8StringForColumnIndex:(int)arg1;
- (const char *)UTF8StringForColumnName:(id)arg1;
- (_Bool)boolForColumn:(id)arg1;
- (_Bool)boolForColumnIndex:(int)arg1;
- (void)close;
- (int)columnCount;
- (int)columnIndexForName:(id)arg1;
- (_Bool)columnIndexIsNull:(int)arg1;
- (_Bool)columnIsNull:(id)arg1;
- (id)columnNameForIndex:(int)arg1;
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
- (id)dataForColumn:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataNoCopyForColumn:(id)arg1;
- (id)dataNoCopyForColumnIndex:(int)arg1;
- (id)dateForColumn:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (void)dealloc;
- (double)doubleForColumn:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (_Bool)hasAnotherRow;
- (int)intForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (void)kvcMagic:(id)arg1;
- (long long)longForColumn:(id)arg1;
- (long long)longForColumnIndex:(int)arg1;
- (long long)longLongIntForColumn:(id)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (_Bool)next;
- (_Bool)nextWithError:(id *)arg1;
- (id)objectAtIndexedSubscript:(int)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(retain) NSString *query; // @synthesize query=_query;
- (id)resultDict;
- (id)resultDictionary;
- (void)setParentDB:(id)arg1;
@property(retain) EBAppLogStatement *statement; // @synthesize statement=_statement;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;

@end

