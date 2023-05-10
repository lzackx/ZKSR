//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UMPushMessage;

@interface UMPSession : NSObject
{
    UMPushMessage *_message;
    NSDate *_startTime;
    double _durationTime;
}

- (void).cxx_destruct;
- (double)duration;
@property(nonatomic) double durationTime; // @synthesize durationTime=_durationTime;
- (id)initWithMessage:(id)arg1;
@property(retain, nonatomic) UMPushMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (_Bool)startSession;
- (_Bool)stopSession;

@end

