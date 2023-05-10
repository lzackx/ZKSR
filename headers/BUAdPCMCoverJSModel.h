//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface BUAdPCMCoverJSModel : NSObject <NSCoding, NSSecureCoding>
{
    NSNumber *_priority;
    NSNumber *_trigger_data;
    NSString *_hostname;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSNumber *trigger_data; // @synthesize trigger_data=_trigger_data;
- (void)setupDataWithDictionary:(id)arg1;

@end
