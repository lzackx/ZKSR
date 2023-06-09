//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextInput-Protocol.h"
#import "YYTextDebugTarget-Protocol.h"
#import "YYTextKeyboardObserver-Protocol.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSMutableArray, NSMutableAttributedString, NSString, NSTimer, UIColor, UIFont, UIImageView, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, YYTextContainer, YYTextContainerView, YYTextDebugOption, YYTextHighlight, YYTextLayout, YYTextMagnifier, YYTextRange, YYTextSelectionView;
@protocol UITextInputDelegate, UITextInputTokenizer, YYTextLinePositionModifier, YYTextParser, YYTextViewDelegate;

@interface YYTextView : UIScrollView <UIScrollViewDelegate, UIAlertViewDelegate, YYTextDebugTarget, YYTextKeyboardObserver, UITextInput>
{
    YYTextRange *_selectedTextRange;
    YYTextRange *_markedTextRange;
    id <YYTextViewDelegate> _outerDelegate;
    UIImageView *_placeHolderView;
    NSMutableAttributedString *_innerText;
    NSMutableAttributedString *_delectedText;
    YYTextContainer *_innerContainer;
    YYTextLayout *_innerLayout;
    YYTextContainerView *_containerView;
    YYTextSelectionView *_selectionView;
    YYTextMagnifier *_magnifierCaret;
    YYTextMagnifier *_magnifierRanged;
    NSMutableAttributedString *_typingAttributesHolder;
    NSDataDetector *_dataDetector;
    double _magnifierRangedOffset;
    struct _NSRange _highlightRange;
    YYTextHighlight *_highlight;
    YYTextLayout *_highlightLayout;
    YYTextRange *_trackingRange;
    _Bool _insetModifiedByKeyboard;
    struct UIEdgeInsets _originalContentInset;
    struct UIEdgeInsets _originalScrollIndicatorInsets;
    NSTimer *_longPressTimer;
    NSTimer *_autoScrollTimer;
    double _autoScrollOffset;
    long long _autoScrollAcceleration;
    NSTimer *_selectionDotFixTimer;
    struct CGPoint _previousOriginInWindow;
    struct CGPoint _touchBeganPoint;
    struct CGPoint _trackingPoint;
    double _touchBeganTime;
    double _trackingTime;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    struct _NSRange _lastTypeRange;
    struct {
        unsigned int trackingGrabber:2;
        unsigned int trackingCaret:1;
        unsigned int trackingPreSelect:1;
        unsigned int trackingTouch:1;
        unsigned int swallowTouch:1;
        unsigned int touchMoved:3;
        unsigned int selectedWithoutEdit:1;
        unsigned int deleteConfirm:1;
        unsigned int ignoreFirstResponder:1;
        unsigned int ignoreTouchBegan:1;
        unsigned int showingMagnifierCaret:1;
        unsigned int showingMagnifierRanged:1;
        unsigned int showingMenu:1;
        unsigned int showingHighlight:1;
        unsigned int typingAttributesOnce:1;
        unsigned int clearsOnInsertionOnce:1;
        unsigned int autoScrollTicked:1;
        unsigned int firstShowDot:1;
        unsigned int needUpdate:1;
        unsigned int placeholderNeedUpdate:1;
        unsigned int insideUndoBlock:1;
        unsigned int firstResponderBeforeUndoAlert:1;
    } _state;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    _Bool _verticalForm;
    _Bool _clearsOnInsertion;
    _Bool _selectable;
    _Bool _highlightable;
    _Bool _editable;
    _Bool _allowsPasteImage;
    _Bool _allowsPasteAttributedString;
    _Bool _allowsCopyAttributedString;
    _Bool _allowsUndoAndRedo;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardType;
    long long _keyboardAppearance;
    long long _returnKeyType;
    NSDictionary *_markedTextStyle;
    id <UITextInputDelegate> _inputDelegate;
    id <UITextInputTokenizer> _tokenizer;
    long long _selectionAffinity;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    long long _textVerticalAlignment;
    unsigned long long _dataDetectorTypes;
    NSDictionary *_linkTextAttributes;
    NSDictionary *_highlightTextAttributes;
    NSDictionary *_typingAttributes;
    NSAttributedString *_attributedText;
    id <YYTextParser> _textParser;
    NSString *_placeholderText;
    UIFont *_placeholderFont;
    UIColor *_placeholderTextColor;
    NSAttributedString *_placeholderAttributedText;
    NSArray *_exclusionPaths;
    id <YYTextLinePositionModifier> _linePositionModifier;
    unsigned long long _maximumUndoLevel;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    double _extraAccessoryViewHeight;
    struct _NSRange _selectedRange;
    struct UIEdgeInsets _textContainerInset;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_canRedo;
- (_Bool)_canUndo;
- (void)_commitPlaceholderUpdate;
- (void)_commitUpdate;
- (struct CGPoint)_convertPointFromLayout:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointToLayout:(struct CGPoint)arg1;
- (struct CGRect)_convertRectFromLayout:(struct CGRect)arg1;
- (struct CGRect)_convertRectToLayout:(struct CGRect)arg1;
- (void)_copySelectedTextToPasteboard;
- (id)_correctedTextPosition:(id)arg1;
- (id)_correctedTextRange:(id)arg1;
- (id)_defaultFont;
- (id)_defaultPlaceholderColor;
- (id)_defaultTintColor;
- (void)_define:(id)arg1;
- (_Bool)_detectText:(id)arg1;
- (void)_endAutoScrollTimer;
- (void)_endLongPressTimer;
- (void)_endSelectionDotFixTimer;
- (void)_endTouchTracking;
- (void)_fixSelectionDot;
- (double)_getAutoscrollOffset;
- (id)_getClosestTokenRangeAtPoint:(struct CGPoint)arg1;
- (id)_getClosestTokenRangeAtPosition:(id)arg1;
- (id)_getHighlightAtPoint:(struct CGPoint)arg1 range:(struct _NSRange *)arg2;
- (double)_getMagnifierRangedOffset;
- (unsigned int)_getMoveDirection;
- (id)_getRootViewController;
- (struct CGSize)_getVisibleSize;
- (void)_hideHighlightAnimated:(_Bool)arg1;
- (void)_hideMagnifier;
- (void)_hideMenu;
- (void)_initTextView;
- (_Bool)_isPasteboardContainsValidValue;
- (_Bool)_isTextPositionValid:(id)arg1;
- (_Bool)_isTextRangeValid:(id)arg1;
- (void)_keyboardChanged;
- (id)_localizedUndoStrings;
- (_Bool)_parseText;
- (void)_pasteboardChanged;
- (void)_redo;
- (void)_removeHighlightAnimated:(_Bool)arg1;
- (void)_replaceRange:(id)arg1 withText:(id)arg2 notifyToDelegate:(_Bool)arg3;
- (void)_resetRedoStack;
- (void)_resetUndoAndRedoStack;
- (void)_restoreFirstResponderAfterUndoAlert;
- (void)_restoreInsetsAnimated:(_Bool)arg1;
- (void)_saveToRedoStack;
- (void)_saveToUndoStack;
- (void)_scrollRangeToVisible:(id)arg1;
- (void)_scrollSelectedRangeToVisible;
- (void)_setAttributedText:(id)arg1;
- (void)_setDataDetectorTypes:(unsigned long long)arg1;
- (void)_setExclusionPaths:(id)arg1;
- (void)_setFont:(id)arg1;
- (void)_setHighlightTextAttributes:(id)arg1;
- (void)_setLinePositionModifier:(id)arg1;
- (void)_setLinkTextAttributes:(id)arg1;
- (void)_setSelectedRange:(struct _NSRange)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextAlignment:(long long)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)_setTextParser:(id)arg1;
- (void)_setTypingAttributes:(id)arg1;
- (void)_setVerticalForm:(_Bool)arg1;
- (_Bool)_shouldDetectText;
- (void)_showHighlightAnimated:(_Bool)arg1;
- (void)_showMagnifierCaret;
- (void)_showMagnifierRanged;
- (void)_showMenu;
- (void)_showUndoRedoAlert;
- (void)_startAutoScrollTimer;
- (void)_startLongPressTimer;
- (void)_startSelectionDotFixTimer;
- (void)_trackDidLongPress;
- (void)_trackDidTickAutoScroll;
- (void)_undo;
- (void)_update;
- (void)_updateAttributesHolder;
- (void)_updateIfNeeded;
- (void)_updateInnerContainerSize;
- (void)_updateLayout;
- (void)_updateMagnifier;
- (void)_updateOuterProperties;
- (void)_updatePlaceholder;
- (void)_updatePlaceholderIfNeeded;
- (void)_updateSelectionView;
- (void)_updateTextRangeByTrackingCaret;
- (void)_updateTextRangeByTrackingGrabber;
- (void)_updateTextRangeByTrackingPreSelect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool allowsCopyAttributedString; // @synthesize allowsCopyAttributedString=_allowsCopyAttributedString;
@property(nonatomic) _Bool allowsPasteAttributedString; // @synthesize allowsPasteAttributedString=_allowsPasteAttributedString;
@property(nonatomic) _Bool allowsPasteImage; // @synthesize allowsPasteImage=_allowsPasteImage;
@property(nonatomic) _Bool allowsUndoAndRedo; // @synthesize allowsUndoAndRedo=_allowsUndoAndRedo;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (id)boldFont_:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canResignFirstResponder;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (long long)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
@property(nonatomic) _Bool clearsOnInsertion; // @synthesize clearsOnInsertion=_clearsOnInsertion;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (void)dealloc;
@property(copy, nonatomic) YYTextDebugOption *debugOption;
@property(nonatomic) __weak id <YYTextViewDelegate> delegate;
- (void)deleteBackward;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(copy, nonatomic) NSArray *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
@property(nonatomic) double extraAccessoryViewHeight; // @synthesize extraAccessoryViewHeight=_extraAccessoryViewHeight;
- (struct CGRect)firstRectForRange:(id)arg1;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (_Bool)fontIsBold_:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
@property(copy, nonatomic) NSDictionary *highlightTextAttributes; // @synthesize highlightTextAttributes=_highlightTextAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)insertText:(id)arg1;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isHighlightable) _Bool highlightable; // @synthesize highlightable=_highlightable;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic, getter=isVerticalForm) _Bool verticalForm; // @synthesize verticalForm=_verticalForm;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
- (void)keyboardChangedWithTransition:(CDStruct_902a08d0)arg1;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) id <YYTextLinePositionModifier> linePositionModifier; // @synthesize linePositionModifier=_linePositionModifier;
@property(copy, nonatomic) NSDictionary *linkTextAttributes; // @synthesize linkTextAttributes=_linkTextAttributes;
@property(readonly, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange=_markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(nonatomic) unsigned long long maximumUndoLevel; // @synthesize maximumUndoLevel=_maximumUndoLevel;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)normalFont_:(id)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
@property(copy, nonatomic) NSAttributedString *placeholderAttributedText; // @synthesize placeholderAttributedText=_placeholderAttributedText;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)reloadInputViews;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (_Bool)resignFirstResponder;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(copy) UITextRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(nonatomic) long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setDebugEnabled_:(_Bool)arg1;
- (void)setFontIsBold_:(_Bool)arg1;
- (void)setFontName_:(id)arg1;
- (void)setFontSize_:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setInsetBottom_:(double)arg1;
- (void)setInsetLeft_:(double)arg1;
- (void)setInsetRight_:(double)arg1;
- (void)setInsetTop_:(double)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMultipleTouchEnabled:(_Bool)arg1;
- (void)setPlaceholderFontIsBold_:(_Bool)arg1;
- (void)setPlaceholderFontName_:(id)arg1;
- (void)setPlaceholderFontSize_:(double)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct UIEdgeInsets textContainerInset; // @synthesize textContainerInset=_textContainerInset;
@property(retain, nonatomic) id <YYTextParser> textParser; // @synthesize textParser=_textParser;
@property(nonatomic) long long textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;
@property(copy, nonatomic) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) YYTextLayout *textLayout;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)tintColorDidChange;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=_tokenizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unmarkText;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

