//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDAuthenticationDialogManagerProtocol-Protocol.h>

@class ACDQueueDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol>
{
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
    NSString *_activeAccountID;
}

- (void).cxx_destruct;
- (void)authenticationDialogCrashed;
- (void)authenticationDialogDidFinishWithSuccess:(_Bool)arg1 response:(id)arg2;
- (void)contextForAuthenticationDialog:(CDUnknownBlockType)arg1;
- (_Bool)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

