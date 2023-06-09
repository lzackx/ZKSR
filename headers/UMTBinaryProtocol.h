//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMTProtocol-Protocol.h"

@class NSString;
@protocol UMTTransport;

@interface UMTBinaryProtocol : NSObject <UMTProtocol>
{
    id <UMTTransport> mTransport;
    _Bool mStrictRead;
    _Bool mStrictWrite;
    int mMessageSizeLimit;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;
- (id)initWithTransport:(id)arg1 strictRead:(_Bool)arg2 strictWrite:(_Bool)arg3;
- (int)messageSizeLimit;
- (id)readBinary;
- (_Bool)readBool;
- (unsigned char)readByte;
- (double)readDouble;
- (void)readFieldBeginReturningName:(id *)arg1 type:(int *)arg2 fieldID:(int *)arg3;
- (void)readFieldEnd;
- (short)readI16;
- (int)readI32;
- (long long)readI64;
- (void)readListBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readListEnd;
- (void)readMapBeginReturningKeyType:(int *)arg1 valueType:(int *)arg2 size:(int *)arg3;
- (void)readMapEnd;
- (void)readMessageBeginReturningName:(id *)arg1 type:(int *)arg2 sequenceID:(int *)arg3;
- (void)readMessageEnd;
- (void)readSetBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readSetEnd;
- (id)readString;
- (id)readStringBody:(int)arg1;
- (void)readStructBeginReturningName:(id *)arg1;
- (void)readStructEnd;
- (void)setMessageSizeLimit:(int)arg1;
- (id)transport;
- (void)writeBinary:(id)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeI16:(short)arg1;
- (void)writeI32:(int)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeListEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeMapEnd;
- (void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)writeMessageEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeString:(id)arg1;
- (void)writeStructBeginWithName:(id)arg1;
- (void)writeStructEnd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

