//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTEventStoreProtocol-Protocol.h"

@class NSString;

@interface GDTLocalLogModel : NSObject <GDTEventStoreProtocol>
{
    _Bool _isDirectEvent;
    long long _storeId;
    long long _sendCount;
    long long _status;
    NSString *_content;
    long long _timestamp;
    NSString *_log;
    long long _seq;
}

- (void).cxx_destruct;
- (id)GDTfunctionp8mGQG;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (long long)eventType;
- (id)initLk2PFoi:(id)arg1;
@property(nonatomic) _Bool isDirectEvent; // @synthesize isDirectEvent=_isDirectEvent;
@property(copy, nonatomic) NSString *log; // @synthesize log=_log;
@property(nonatomic) long long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

