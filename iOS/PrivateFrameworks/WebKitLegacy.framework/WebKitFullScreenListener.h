//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebKitFullScreenListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener>
{
    struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element>> _element;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webkitDidExitFullScreen;
- (void)webkitWillExitFullScreen;
- (void)webkitDidEnterFullScreen;
- (void)webkitWillEnterFullScreen;
- (id)initWithElement:(struct Element *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

