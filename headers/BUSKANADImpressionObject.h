//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class BUSKANADImpressionModel, NSDate;

@interface BUSKANADImpressionObject : NSObject <NSCoding>
{
    NSDate *_impressionDate;
    BUSKANADImpressionModel *_skan_Impression_item;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSDate *impressionDate; // @synthesize impressionDate=_impressionDate;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) BUSKANADImpressionModel *skan_Impression_item; // @synthesize skan_Impression_item=_skan_Impression_item;

@end
