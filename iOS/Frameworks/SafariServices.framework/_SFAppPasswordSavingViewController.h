//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFPasswordViewController.h>

@class NSString, SFPasswordSavingRemoteViewController, SFQueueingServiceViewControllerProxy;
@protocol SFPasswordSavingServiceViewControllerProtocol;

@interface _SFAppPasswordSavingViewController : _SFPasswordViewController
{
    SFPasswordSavingRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordSavingServiceViewControllerProtocol> *_serviceProxy;
    NSString *_tokenForShowingPrompt;
}

- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_remoteViewController;
- (void)viewDidLoad;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (id)init;

@end

