//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BU_DocumentStyle-Protocol.h"

@class BU_CSSStyleDeclaration, BU_Element, NSString;

@protocol BU_DocumentCSS <BU_DocumentStyle>
- (BU_CSSStyleDeclaration *)getOverrideStyle:(BU_Element *)arg1 pseudoElt:(NSString *)arg2;
@end

