//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUDynamicBrickModel, BUDynamicCreativeModel, NSArray, NSDictionary, NSString;

@interface BUDynamicLayoutUnitModel : NSObject
{
    _Bool _isVideoImageBudgetBrick;
    NSDictionary *_originDictionary;
    NSDictionary *_originDictionary_notIncludeChildren;
    double _buDynamic_x;
    double _buDynamic_y;
    double _buDynamic_width;
    double _buDynamic_height;
    double _buDynamic_remainWidth;
    NSString *_buDynamic_id;
    BUDynamicBrickModel *_buDynamic_brick;
    NSString *_componentId;
    NSString *_type;
    NSArray *_children;
    NSDictionary *_values;
    NSDictionary *_customComponentDefaultValues;
    NSDictionary *_themeValues;
    BUDynamicLayoutUnitModel *_parent;
    BUDynamicCreativeModel *_creativeModel;
}

- (void).cxx_destruct;
- (void)_changeCustomComponentVesselToAppropriateIfNeed;
- (void)_changeVideoImageBudgeToAppropriateIfNeed;
@property(retain, nonatomic) BUDynamicBrickModel *buDynamic_brick; // @synthesize buDynamic_brick=_buDynamic_brick;
@property(nonatomic) double buDynamic_height; // @synthesize buDynamic_height=_buDynamic_height;
@property(copy, nonatomic) NSString *buDynamic_id; // @synthesize buDynamic_id=_buDynamic_id;
@property(nonatomic) double buDynamic_remainWidth; // @synthesize buDynamic_remainWidth=_buDynamic_remainWidth;
@property(nonatomic) double buDynamic_width; // @synthesize buDynamic_width=_buDynamic_width;
@property(nonatomic) double buDynamic_x; // @synthesize buDynamic_x=_buDynamic_x;
@property(nonatomic) double buDynamic_y; // @synthesize buDynamic_y=_buDynamic_y;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(nonatomic) __weak BUDynamicCreativeModel *creativeModel; // @synthesize creativeModel=_creativeModel;
@property(copy, nonatomic) NSDictionary *customComponentDefaultValues; // @synthesize customComponentDefaultValues=_customComponentDefaultValues;
- (id)debugInfoWithParentType:(id)arg1;
- (id)dictionaryValue;
- (id)dictionaryValueNotIncludeValues;
- (_Bool)heightCanBeFlex;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 parent:(id)arg2;
- (_Bool)isAbsolute;
- (_Bool)isFixed;
- (_Bool)isLeaf;
- (_Bool)isNoDataBrick;
@property(nonatomic) _Bool isVideoImageBudgetBrick; // @synthesize isVideoImageBudgetBrick=_isVideoImageBudgetBrick;
- (_Bool)is_customComponentVesselBrick;
- (_Bool)is_root;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
@property(copy, nonatomic) NSDictionary *originDictionary_notIncludeChildren; // @synthesize originDictionary_notIncludeChildren=_originDictionary_notIncludeChildren;
@property(nonatomic) __weak BUDynamicLayoutUnitModel *parent; // @synthesize parent=_parent;
- (void)printBaseInfoWithKey:(id)arg1;
- (void)printBaseInfoWithKey:(id)arg1 parentType:(id)arg2;
@property(readonly, nonatomic) NSArray *realChildArray;
@property(copy, nonatomic) NSDictionary *themeValues; // @synthesize themeValues=_themeValues;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *values; // @synthesize values=_values;
- (void)updateTagGroupCountIfNeedWithCreativeModel:(id)arg1;
- (void)updateValuesInfoWithDefaultDictionary:(id)arg1 creativeModel:(id)arg2;
- (_Bool)widthCanBeFlex;

@end
