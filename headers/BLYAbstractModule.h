//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYAbstractModule : NSObject
{
    _Bool _enable;
    _Bool _jobFinished;
}

+ (id)constructSelector;
- (_Bool)disableModule;
- (_Bool)enableModule;
- (id)init;
@property(getter=isEnabled) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic, getter=isJobFinished) _Bool jobFinished; // @synthesize jobFinished=_jobFinished;
- (_Bool)shouldEnable;
- (id)strategyGetterSelector;
- (id)strategyValueMapKey;

@end

