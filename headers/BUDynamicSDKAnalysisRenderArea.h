//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUDynamicLayoutUnitModel, NSMutableArray, NSString;

@interface BUDynamicSDKAnalysisRenderArea : NSObject
{
    double _x;
    double _y;
    double _width;
    double _height;
    NSString *_treeId;
    BUDynamicLayoutUnitModel *_brick;
    NSMutableArray *_children;
    BUDynamicSDKAnalysisRenderArea *_parent;
    double _remainWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUDynamicLayoutUnitModel *brick; // @synthesize brick=_brick;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) __weak BUDynamicSDKAnalysisRenderArea *parent; // @synthesize parent=_parent;
@property(nonatomic) double remainWidth; // @synthesize remainWidth=_remainWidth;
@property(copy, nonatomic) NSString *treeId; // @synthesize treeId=_treeId;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double y; // @synthesize y=_y;
- (void)updateResult;

@end

