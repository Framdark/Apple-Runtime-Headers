//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WKNavigationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebArchiveGenerationControllerNavigationDelegate : NSObject <WKNavigationDelegate>
{
    struct WebArchiveGenerationController *_controller;
}

- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)initWithWebArchiveGenerationController:(struct WebArchiveGenerationController *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

