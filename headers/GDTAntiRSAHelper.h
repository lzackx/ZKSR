//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTAntiRSAHelper : NSObject
{
    struct __SecKey *keyRef;
    struct __SecKey *tracePubKeyRef;
}

+ (id)instance;
- (struct __SecKey *)GDTfunctionk66LOa;
- (struct __SecKey *)GDTfunctionl7vmfb;
- (id)encrypt:(id)arg1;
- (id)init;
- (_Bool)verify:(id)arg1 forData:(id)arg2;

@end

