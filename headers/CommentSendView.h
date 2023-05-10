//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextView;

@interface CommentSendView : UIView <UITextViewDelegate>
{
    _Bool _isreply;
    CDUnknownBlockType _sendMessage;
    UITextView *_meassageTextView;
    UILabel *_placeLabel;
    UIButton *_sendBtn;
}

+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
+ (id)makeCommentSendView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (_Bool)becomeFirstResponder;
- (void)clearText;
- (void)dealloc;
@property(nonatomic) _Bool isreply; // @synthesize isreply=_isreply;
@property(nonatomic) __weak UITextView *meassageTextView; // @synthesize meassageTextView=_meassageTextView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) __weak UILabel *placeLabel; // @synthesize placeLabel=_placeLabel;
- (_Bool)resignFirstResponder;
@property(nonatomic) __weak UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(copy, nonatomic) CDUnknownBlockType sendMessage; // @synthesize sendMessage=_sendMessage;
- (void)sendMessage:(id)arg1;
- (void)setPlaceText:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateHeightWithContentSizeHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

