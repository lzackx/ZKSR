//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface BU_NodeList : NSObject <NSFastEnumeration>
{
    NSMutableArray *internalArray;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSMutableArray *internalArray; // @synthesize internalArray;
- (id)item:(unsigned long long)arg1;
@property(readonly) unsigned long long length;

@end

