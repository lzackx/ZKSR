//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADBinaryHeap, NSString;

@interface GADContent : NSObject
{
    long long _contentAgeWeight;
    long long _contentLengthWeight;
    long long _contentTotalLength;
    GADBinaryHeap *_heap;
    long long _maximumShingleCount;
    unsigned long long _minimumParagraphLength;
    unsigned long long _shingleLength;
    NSString *_fingerprint;
    long long _score;
    long long _sequenceNumber;
}

- (void).cxx_destruct;
- (void)applyRollingHashToTokens:(id)arg1 baseHash:(unsigned int)arg2;
- (void)deductServedPenalty;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (id)initWithSequenceNumber:(long long)arg1;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
- (void)selectShinglesFromTokens:(id)arg1;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)shingleHash;
- (void)updateContentWithText:(id)arg1;
- (void)updateHeapWithHash:(unsigned int)arg1 shingle:(id)arg2;

@end
