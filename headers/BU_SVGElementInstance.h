//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BU_SVGElement, BU_SVGElementInstanceList, BU_SVGUseElement;

@interface BU_SVGElementInstance : NSObject
{
    BU_SVGElementInstance *parentNode;
    BU_SVGElementInstanceList *childNodes;
    BU_SVGElement *_correspondingElement;
    BU_SVGUseElement *_correspondingUseElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BU_SVGElementInstanceList *childNodes; // @synthesize childNodes;
@property(nonatomic) __weak BU_SVGElement *correspondingElement; // @synthesize correspondingElement=_correspondingElement;
@property(nonatomic) __weak BU_SVGUseElement *correspondingUseElement; // @synthesize correspondingUseElement=_correspondingUseElement;
- (void)dealloc;
@property(readonly, nonatomic) BU_SVGElementInstance *firstChild;
@property(readonly, nonatomic) BU_SVGElementInstance *lastChild;
@property(readonly, nonatomic) BU_SVGElementInstance *nextSibling;
@property(retain, nonatomic) BU_SVGElementInstance *parentNode; // @synthesize parentNode;
@property(readonly, nonatomic) BU_SVGElementInstance *previousSibling;

@end

