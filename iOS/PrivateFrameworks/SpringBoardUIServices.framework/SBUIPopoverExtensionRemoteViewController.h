//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/_SBUIPopoverExtensionRemoteInterface-Protocol.h>

@protocol SBUIPopoverExtension, _SBUIPopoverExtensionHostInterface;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface>
{
    id <_SBUIPopoverExtensionHostInterface> _hostService;
    UIViewController<SBUIPopoverExtension> *_extensionViewController;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) id <_SBUIPopoverExtensionHostInterface> hostService; // @synthesize hostService=_hostService;
- (void)_setupChildViewController:(id)arg1;
- (id)popoverExtensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;

@end

