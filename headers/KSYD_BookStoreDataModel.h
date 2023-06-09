//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSYD_BookIndexDataModel, KSYD_BookStoreBookLists, KSYD_BookStoreCategory, NSArray;

@interface KSYD_BookStoreDataModel : NSObject
{
    KSYD_BookStoreCategory *_category_1;
    KSYD_BookStoreCategory *_category_2;
    KSYD_BookStoreBookLists *_book_lists;
    NSArray *_rank;
    KSYD_BookIndexDataModel *_theNew_book;
    KSYD_BookIndexDataModel *_hot_book;
    NSArray *_icon;
    NSArray *_banner;
    KSYD_BookIndexDataModel *_recommend;
    KSYD_BookIndexDataModel *_like_book;
    NSArray *_sort_book;
    NSArray *_data;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) KSYD_BookStoreBookLists *book_lists; // @synthesize book_lists=_book_lists;
@property(retain, nonatomic) KSYD_BookStoreCategory *category_1; // @synthesize category_1=_category_1;
@property(retain, nonatomic) KSYD_BookStoreCategory *category_2; // @synthesize category_2=_category_2;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) KSYD_BookIndexDataModel *hot_book; // @synthesize hot_book=_hot_book;
@property(retain, nonatomic) NSArray *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) KSYD_BookIndexDataModel *like_book; // @synthesize like_book=_like_book;
@property(copy, nonatomic) NSArray *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) KSYD_BookIndexDataModel *recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) NSArray *sort_book; // @synthesize sort_book=_sort_book;
@property(retain, nonatomic) KSYD_BookIndexDataModel *theNew_book; // @synthesize theNew_book=_theNew_book;

@end

