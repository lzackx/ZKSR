//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

#import "NSCopying-Protocol.h"

@interface YYTextSelectionRect : UITextSelectionRect <NSCopying>
{
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
    long long _writingDirection;
    struct CGRect _rect;
}

@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;

@end

