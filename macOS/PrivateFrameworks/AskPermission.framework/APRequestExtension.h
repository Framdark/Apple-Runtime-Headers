//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AskPermission/NSExtensionRequestHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>
{
    NSExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
@property(retain) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)_finish;
- (void)requestUpdatedWithResult:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

