//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSYD_CommentModel, NSMutableAttributedString, YYTextLayout;

@interface KSYD_commentLayout : NSObject
{
    _Bool _showAllText;
    _Bool _isDetail;
    NSMutableAttributedString *_arrtibuteString;
    YYTextLayout *_contentLayout;
    KSYD_CommentModel *_commentModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableAttributedString *arrtibuteString; // @synthesize arrtibuteString=_arrtibuteString;
@property(retain, nonatomic) KSYD_CommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) YYTextLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
- (id)initWithStatus:(id)arg1 isShowAllText:(_Bool)arg2 isDetail:(_Bool)arg3;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
- (void)layoutModel;
@property(nonatomic) _Bool showAllText; // @synthesize showAllText=_showAllText;

@end

