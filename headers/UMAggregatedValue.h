//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UMAggregatedValue : NSObject
{
    int _count;
    int _twNum;
    long long _valueSum;
    long long _tsSum;
    NSMutableArray *_labels;
}

- (void).cxx_destruct;
- (void)addLabels:(id)arg1;
@property(nonatomic) int count; // @synthesize count=_count;
- (id)init;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
- (void)setLabelsWithString:(const char *)arg1;
@property(nonatomic) long long tsSum; // @synthesize tsSum=_tsSum;
@property(nonatomic) int twNum; // @synthesize twNum=_twNum;
@property(nonatomic) long long valueSum; // @synthesize valueSum=_valueSum;

@end
