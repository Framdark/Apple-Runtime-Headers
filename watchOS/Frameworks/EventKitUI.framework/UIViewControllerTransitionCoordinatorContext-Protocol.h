//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class NSString, UIView, UIViewController;

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) int completionCurve;
@property(readonly, nonatomic) float completionVelocity;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
@end

