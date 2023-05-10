//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDPartner, NSArray, NSDictionary, NSString, UIView;

@interface GADOMIDAdSessionContext : NSObject
{
    unsigned long long _type;
    UIView *_webView;
    NSArray *_resources;
    NSDictionary *_injectedResources;
    NSString *_script;
    GADOMIDPartner *_partner;
    NSString *_contentUrl;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithPartner:(id)arg1 javaScriptWebView:(id)arg2 contentUrl:(id)arg3 customReferenceIdentifier:(id)arg4 error:(id *)arg5;
- (id)initWithPartner:(id)arg1 script:(id)arg2 resources:(id)arg3 contentUrl:(id)arg4 customReferenceIdentifier:(id)arg5 error:(id *)arg6;
- (id)initWithPartner:(id)arg1 script:(id)arg2 resources:(id)arg3 customReferenceIdentifier:(id)arg4 error:(id *)arg5;
- (id)initWithPartner:(id)arg1 webView:(id)arg2 contentUrl:(id)arg3 customReferenceIdentifier:(id)arg4 error:(id *)arg5;
- (id)initWithPartner:(id)arg1 webView:(id)arg2 customReferenceIdentifier:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSDictionary *injectedResources; // @synthesize injectedResources=_injectedResources;
- (id)injectedResourcesJSON;
@property(readonly, nonatomic) GADOMIDPartner *partner; // @synthesize partner=_partner;
@property(readonly, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (id)resourcesJSON;
@property(readonly, nonatomic) NSString *script; // @synthesize script=_script;
- (id)toJSON;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)typeString;
@property(readonly, nonatomic) UIView *webView; // @synthesize webView=_webView;

@end

