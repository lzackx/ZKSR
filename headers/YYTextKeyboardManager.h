//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIView, UIWindow;

@interface YYTextKeyboardManager : NSObject
{
    NSHashTable *_observers;
    struct CGRect _fromFrame;
    _Bool _fromVisible;
    long long _fromOrientation;
    struct CGRect _notificationFromFrame;
    struct CGRect _notificationToFrame;
    double _notificationDuration;
    long long _notificationCurve;
    _Bool _hasNotification;
    struct CGRect _observedToFrame;
    _Bool _hasObservedChange;
    _Bool _lastIsNotification;
}

+ (id)defaultManager;
+ (void)load;
- (void).cxx_destruct;
- (id)_getKeyboardViewFromWindow:(id)arg1;
- (id)_init;
- (void)_initFrameObserver;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_keyboardFrameDidChangeNotification:(id)arg1;
- (void)_keyboardFrameWillChangeNotification:(id)arg1;
- (void)_notifyAllObservers;
- (double)_systemVersion;
- (void)addObserver:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible;
@property(readonly, nonatomic) struct CGRect keyboardFrame;
@property(readonly, nonatomic) UIView *keyboardView;
@property(readonly, nonatomic) UIWindow *keyboardWindow;
- (void)removeObserver:(id)arg1;

@end

