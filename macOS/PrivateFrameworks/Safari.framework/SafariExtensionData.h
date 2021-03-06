//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ExtensionWebsiteAccess, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SafariExtensionData : NSObject
{
    NSURL *_safariExtensionBaseURI;
    RetainPtr_86d965a1 _bundleCodeRef;
    ExtensionWebsiteAccess *_websiteAccess;
    NSArray *_injectedScripts;
    NSArray *_injectedStyleSheets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *injectedStyleSheets; // @synthesize injectedStyleSheets=_injectedStyleSheets;
@property(copy, nonatomic) NSArray *injectedScripts; // @synthesize injectedScripts=_injectedScripts;
@property(retain, nonatomic) ExtensionWebsiteAccess *websiteAccess; // @synthesize websiteAccess=_websiteAccess;
@property(nonatomic) RetainPtr_86d965a1 bundleCodeRef; // @synthesize bundleCodeRef=_bundleCodeRef;
@property(retain, nonatomic) NSURL *safariExtensionBaseURI; // @synthesize safariExtensionBaseURI=_safariExtensionBaseURI;
- (id)initWithExtension:(id)arg1;

@end

