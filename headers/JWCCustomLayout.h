//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol JWCCustomLayoutDelegate;

@interface JWCCustomLayout : UICollectionViewLayout
{
    id <JWCCustomLayoutDelegate> _delegate;
    long long _columnCount;
    double _lineSpacing;
    double _interitemSpacing;
    NSMutableArray *_attrsArray;
    NSMutableArray *_columnHeights;
    double _contentHeight;
    double _lastContentHeight;
    double _spacingWithLastSection;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *attrsArray; // @synthesize attrsArray=_attrsArray;
- (struct CGSize)collectionViewContentSize;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <JWCCustomLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double lastContentHeight; // @synthesize lastContentHeight=_lastContentHeight;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void)prepareLayout;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) double spacingWithLastSection; // @synthesize spacingWithLastSection=_spacingWithLastSection;

@end
