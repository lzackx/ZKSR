//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface BarrageClock : NSObject
{
    CDUnknownBlockType _block;
    CADisplayLink *_displayLink;
    double _previousDate;
    double _pausedSpeed;
    _Bool _launched;
    double _speed;
    double _time;
}

+ (id)clockWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool launched; // @synthesize launched=_launched;
- (void)pause;
- (void)reset;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)start;
- (void)stop;
- (void)update;
- (void)updateTime;

@end

