//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTPODS_GDataXMLNode.h"

@interface GDTPODS_GDataXMLElement : GDTPODS_GDataXMLNode
{
}

+ (void)deleteNamespacePtr:(struct _xmlNs *)arg1 fromXMLNode:(struct _xmlNode *)arg2;
+ (void)fixDuplicateNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
+ (void)fixQualifiedNamesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2;
+ (void)fixUpNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2;
+ (void)fixUpNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
- (void)addAttribute:(id)arg1;
- (void)addChild:(id)arg1;
- (void)addNamespace:(id)arg1;
- (id)attributeForLocalName:(id)arg1 URI:(id)arg2;
- (id)attributeForName:(id)arg1;
- (id)attributeForXMLNode:(struct _xmlAttr *)arg1;
- (id)attributes;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)namespaces;
- (void)removeChild:(id)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (void)setNamespaces:(id)arg1;

@end

