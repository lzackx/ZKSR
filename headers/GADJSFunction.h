//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADJSContext, GADObserverCollection, NSMutableDictionary, NSString;

@interface GADJSFunction : NSObject
{
    NSString *_functionName;
    GADJSContext *_JSContext;
    GADObserverCollection *_observers;
    NSMutableDictionary *_resultHandlers;
}

- (void).cxx_destruct;
- (void)callWithArguments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeWithResultIdentifier:(id)arg1 result:(id)arg2 error:(id)arg3;
- (id)initWithFunctionName:(id)arg1 context:(id)arg2;

@end

