//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUADLoadDurationModel, BUADLoadSplashContext, BUAdSlot, BUMaterialMeta;

@interface BUADLoadContext : NSObject
{
    BUAdSlot *_slot;
    BUMaterialMeta *_material;
    BUADLoadDurationModel *_loadDurationModel;
    BUADLoadSplashContext *_splashContext;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) BUADLoadDurationModel *loadDurationModel; // @synthesize loadDurationModel=_loadDurationModel;
@property(retain, nonatomic) BUMaterialMeta *material; // @synthesize material=_material;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) BUADLoadSplashContext *splashContext; // @synthesize splashContext=_splashContext;

@end
