//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageTransformer-Protocol.h"

@class NSString;

@interface SDImageCroppingTransformer : NSObject <SDImageTransformer>
{
    struct CGRect _rect;
}

+ (id)transformerWithRect:(struct CGRect)arg1;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)transformedImageWithImage:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *transformerKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

