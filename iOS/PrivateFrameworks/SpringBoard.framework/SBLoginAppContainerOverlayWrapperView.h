//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView
{
    _UIBackdropView *_backdropView;
    SBLockOverlayView *_overlayView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBLockOverlayView *overlayView; // @synthesize overlayView=_overlayView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 overlayView:(id)arg2;

@end

