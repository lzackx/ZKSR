//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTDLTemplateNodeValues, NSMutableArray, NSString;

@interface GDTDLTemplateNode : NSObject
{
    NSString *_nodeClassName;
    NSMutableArray *_subNodes;
    NSString *_templateId;
    GDTDLTemplateNodeValues *_nodeValues;
}

- (void).cxx_destruct;
- (id)GDTfunctiono55kNn;
- (id)init;
@property(copy, nonatomic) NSString *nodeClassName; // @synthesize nodeClassName=_nodeClassName;
@property(retain, nonatomic) GDTDLTemplateNodeValues *nodeValues; // @synthesize nodeValues=_nodeValues;
@property(retain, nonatomic) NSMutableArray *subNodes; // @synthesize subNodes=_subNodes;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;

@end
