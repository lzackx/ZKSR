//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSYD_AskBookModel : NSObject
{
    long long _book_id;
    NSString *_msg;
    NSString *_name;
    NSString *_author;
    NSString *_created_at;
    long long _form;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) long long book_id; // @synthesize book_id=_book_id;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(nonatomic) long long form; // @synthesize form=_form;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

