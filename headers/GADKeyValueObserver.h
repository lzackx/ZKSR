//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADKeyValueObserver : NSObject
{
    id _object;
    CDUnknownBlockType _block;
    NSString *_key;
    GADKeyValueObserver *_retainCycle;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 key:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)invalidateAndCancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

