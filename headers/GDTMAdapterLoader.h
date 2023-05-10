//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTMNetworkConfigModel, NSTimer;
@protocol GDTMMediatorProtocol;

@interface GDTMAdapterLoader : NSObject
{
    _Bool _isLoading;
    id <GDTMMediatorProtocol> _mediator;
    CDUnknownBlockType _loadFinishBlock;
    GDTMNetworkConfigModel *_currentTopOne;
    long long _fetchFlag;
    double _timeout;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (id)GDTfunctiond1XjiO:(id)arg1;
- (void)GDTfunctionk8vC0U;
- (void)GDTfunctionm6aDXM:(_Bool)arg1;
- (void)GDTfunctionm6aDXM:(id)arg1 filled:(_Bool)arg2;
- (void)GDTfunctionn6f1SD:(id)arg1;
- (void)GDTfunctionu8DqbQ;
@property(readonly, nonatomic) GDTMNetworkConfigModel *currentTopOne; // @synthesize currentTopOne=_currentTopOne;
- (void)dealloc;
@property(nonatomic) long long fetchFlag; // @synthesize fetchFlag=_fetchFlag;
- (id)initLs2fFJz:(id)arg1;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) CDUnknownBlockType loadFinishBlock; // @synthesize loadFinishBlock=_loadFinishBlock;
@property(nonatomic) __weak id <GDTMMediatorProtocol> mediator; // @synthesize mediator=_mediator;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)start;
- (void)stop;

@end

