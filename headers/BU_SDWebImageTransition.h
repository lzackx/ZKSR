//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface BU_SDWebImageTransition : NSObject
{
    _Bool _avoidAutoSetImage;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    unsigned long long _animationOptions;
    CDUnknownBlockType _prepares;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
}

+ (id)curlDownTransition;
+ (id)curlUpTransition;
+ (id)fadeTransition;
+ (id)flipFromBottomTransition;
+ (id)flipFromLeftTransition;
+ (id)flipFromRightTransition;
+ (id)flipFromTopTransition;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(nonatomic) _Bool avoidAutoSetImage; // @synthesize avoidAutoSetImage=_avoidAutoSetImage;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType prepares; // @synthesize prepares=_prepares;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

@end

