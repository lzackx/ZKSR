//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUSplashBottomViewInterface-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface BUDynamicBrickValuesModel : NSObject <BUSplashBottomViewInterface>
{
    _Bool _allowTextFlow;
    NSDictionary *_originDictionary;
    double _borderRadius;
    double _borderSize;
    double _height;
    double _interactValidate;
    double _paddingBottom;
    double _paddingLeft;
    double _paddingRight;
    double _paddingTop;
    double _width;
    double _fontSize;
    double _fontWeight;
    NSString *_fontFamily;
    NSString *_widthMode;
    NSString *_heightMode;
    long long _zIndex;
    long long _timingStart;
    long long _timingEnd;
    long long _lineFeed;
    long long _lineLimit;
    long long _lineCount;
    NSString *_adType;
    NSString *_bgColor;
    NSString *_borderStyle;
    NSString *_interactText;
    long long _interactType;
    NSString *_justifyHorizontal;
    NSString *_justifyVertical;
    NSString *_color;
    NSString *_borderColor;
    NSString *_textAlign;
    NSString *_clickArea;
    NSString *_clickTigger;
    NSString *_clickType;
    long long _areaType;
    double _left;
    double _top;
    double _right;
    double _bottom;
    double _useLeft;
    double _useRight;
    double _useTop;
    double _useBottom;
    long long _align;
    long long _textFlowType;
    long long _textFlowDuration;
    NSArray *_animations;
    long long _isDataFixed;
    NSString *_data;
    double _marginBottom;
    double _marginLeft;
    double _marginRight;
    double _marginTop;
    double _letterSpacing;
    double _lineHeight;
    long long _position;
    long long _tagMaxCount;
    NSString *_tagStyleType;
    NSString *_type;
    NSString *_originData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(nonatomic) long long align; // @synthesize align=_align;
@property(nonatomic) _Bool allowTextFlow; // @synthesize allowTextFlow=_allowTextFlow;
@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(nonatomic) long long areaType; // @synthesize areaType=_areaType;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(nonatomic) double borderSize; // @synthesize borderSize=_borderSize;
@property(copy, nonatomic) NSString *borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(copy, nonatomic) NSString *clickArea; // @synthesize clickArea=_clickArea;
@property(copy, nonatomic) NSString *clickTigger; // @synthesize clickTigger=_clickTigger;
@property(copy, nonatomic) NSString *clickType; // @synthesize clickType=_clickType;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (id)dictionaryValue;
- (long long)dynamicAdType;
- (long long)dynamicAdTypeWith:(id)arg1;
- (id)dynamicInteractionType;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
- (id)fontWidthStyleModel;
- (CDStruct_d20431f8)getBoxSizeInfo;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *heightMode; // @synthesize heightMode=_heightMode;
- (id)initWithDictionary:(id)arg1 type:(id)arg2;
@property(copy, nonatomic) NSString *interactText; // @synthesize interactText=_interactText;
@property(nonatomic) long long interactType; // @synthesize interactType=_interactType;
@property(nonatomic) double interactValidate; // @synthesize interactValidate=_interactValidate;
@property(nonatomic) long long isDataFixed; // @synthesize isDataFixed=_isDataFixed;
@property(copy, nonatomic) NSString *justifyHorizontal; // @synthesize justifyHorizontal=_justifyHorizontal;
@property(copy, nonatomic) NSString *justifyVertical; // @synthesize justifyVertical=_justifyVertical;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(nonatomic) long long lineFeed; // @synthesize lineFeed=_lineFeed;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) long long lineLimit; // @synthesize lineLimit=_lineLimit;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
- (struct CGSize)maxAvailableSize;
@property(copy, nonatomic) NSString *originData; // @synthesize originData=_originData;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)realDataWithCreativeDictionary:(id)arg1;
- (id)realDataWithCreativeDictionary:(id)arg1 withKey:(id)arg2;
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) long long tagMaxCount; // @synthesize tagMaxCount=_tagMaxCount;
@property(copy, nonatomic) NSString *tagStyleType; // @synthesize tagStyleType=_tagStyleType;
@property(copy, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) long long textFlowDuration; // @synthesize textFlowDuration=_textFlowDuration;
@property(nonatomic) long long textFlowType; // @synthesize textFlowType=_textFlowType;
@property(nonatomic) long long timingEnd; // @synthesize timingEnd=_timingEnd;
@property(nonatomic) long long timingStart; // @synthesize timingStart=_timingStart;
@property(nonatomic) double top; // @synthesize top=_top;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) double useBottom; // @synthesize useBottom=_useBottom;
@property(nonatomic) double useLeft; // @synthesize useLeft=_useLeft;
@property(nonatomic) double useRight; // @synthesize useRight=_useRight;
@property(nonatomic) double useTop; // @synthesize useTop=_useTop;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *widthMode; // @synthesize widthMode=_widthMode;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
- (id)slideArea;
- (double)splashBottomViewAreaBlankHeight;
- (id)splashBottomViewClickText;
- (double)splashBottomViewClickTextFontSize;
- (double)splashBottomViewClickTopTextFontSize;
- (double)splashBottomViewHalfBlankHeight;
- (double)splashBottomViewShakeAmplitude;
- (id)splashBottomViewTopClickText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
