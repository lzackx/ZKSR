//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTPlayerNotification : NSObject
{
    _Bool _disableBackgroundNotification;
    unsigned long long _backgroundState;
    CDUnknownBlockType _willResignActive;
    CDUnknownBlockType _didBecomeActive;
    CDUnknownBlockType _newDeviceAvailable;
    CDUnknownBlockType _oldDeviceUnavailable;
    CDUnknownBlockType _categoryChange;
    CDUnknownBlockType _volumeChanged;
    CDUnknownBlockType _audioSessionInterrupted;
}

- (void).cxx_destruct;
- (void)addNotification;
- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification;
@property(copy, nonatomic) CDUnknownBlockType audioSessionInterrupted; // @synthesize audioSessionInterrupted=_audioSessionInterrupted;
- (void)audioSessionInterruptedNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
@property(nonatomic) unsigned long long backgroundState; // @synthesize backgroundState=_backgroundState;
@property(copy, nonatomic) CDUnknownBlockType categoryChange; // @synthesize categoryChange=_categoryChange;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
@property(nonatomic) _Bool disableBackgroundNotification; // @synthesize disableBackgroundNotification=_disableBackgroundNotification;
@property(copy, nonatomic) CDUnknownBlockType newDeviceAvailable; // @synthesize newDeviceAvailable=_newDeviceAvailable;
@property(copy, nonatomic) CDUnknownBlockType oldDeviceUnavailable; // @synthesize oldDeviceUnavailable=_oldDeviceUnavailable;
- (void)removeNotification;
@property(copy, nonatomic) CDUnknownBlockType volumeChanged; // @synthesize volumeChanged=_volumeChanged;
@property(copy, nonatomic) CDUnknownBlockType willResignActive; // @synthesize willResignActive=_willResignActive;
- (void)volumeDidChangeNotification:(id)arg1;

@end
