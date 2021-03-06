//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLFieldOfIconsSnapshotProvider, CSLHexLayout, CSLUIIconView, NSString;
@protocol CSLCrownInputEventHandler;

@protocol CSLLauncherViewControllerTransactionHelper <NSObject>
@property(retain, nonatomic) CSLHexLayout *universeLayoutOverride;
@property(nonatomic) __weak id <CSLCrownInputEventHandler> crownInputHandler;
@property(nonatomic) float zoom;
- (CSLFieldOfIconsSnapshotProvider *)snapshotProvider;
- (_Bool)isClockCentered;
- (void)setViewHidden:(_Bool)arg1;
- (CSLHexLayout *)buddyTransitionLayout;
- (CSLUIIconView *)iconViewForBundleIdentifier:(NSString *)arg1;
- (void (^)(float))createApplierToCenterAnimated;
- (void)setTargetHexForBundleIdenitifer:(NSString *)arg1 shouldCenter:(_Bool)arg2 shouldScrollIfDistant:(_Bool)arg3 animated:(_Bool)arg4;
- (void)setZoom:(float)arg1 animated:(_Bool)arg2;
- (void)unlockTarget;
- (void)lockTarget;
@end

