//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryTitleCellModel.h"

@class NSString, NSURL;

@interface JXCategoryTitleImageCellModel : JXCategoryTitleCellModel
{
    _Bool _imageZoomEnabled;
    unsigned long long _imageType;
    CDUnknownBlockType _loadImageCallback;
    NSString *_imageName;
    NSURL *_imageURL;
    NSString *_selectedImageName;
    NSURL *_selectedImageURL;
    double _titleImageSpacing;
    double _imageZoomScale;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool imageZoomEnabled; // @synthesize imageZoomEnabled=_imageZoomEnabled;
@property(nonatomic) double imageZoomScale; // @synthesize imageZoomScale=_imageZoomScale;
@property(copy, nonatomic) CDUnknownBlockType loadImageCallback; // @synthesize loadImageCallback=_loadImageCallback;
@property(copy, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(retain, nonatomic) NSURL *selectedImageURL; // @synthesize selectedImageURL=_selectedImageURL;
@property(nonatomic) double titleImageSpacing; // @synthesize titleImageSpacing=_titleImageSpacing;

@end

