//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class UIViewController;
@protocol WFIntentViewController;

@protocol WFIntentViewControllerDelegate <NSObject>
- (void)intentViewControllerDidDismissPlatter:(UIViewController<WFIntentViewController> *)arg1;
- (void)intentViewControllerDidConfirmIntent:(UIViewController<WFIntentViewController> *)arg1;
- (void)intentViewControllerWasTapped:(UIViewController<WFIntentViewController> *)arg1;
@end

