//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLGlobalScrollCenterViewController;

@protocol CSLGlobalScrollCenterDelegate <NSObject>
- (void)globalScrollCenterDidDismiss:(CSLGlobalScrollCenterViewController *)arg1;
- (void)globalScrollCenterWillDismiss:(CSLGlobalScrollCenterViewController *)arg1;
- (void)globalScrollCenterDidPresent:(CSLGlobalScrollCenterViewController *)arg1;
- (void)globalScrollCenterWillPresent:(CSLGlobalScrollCenterViewController *)arg1;
- (void)globalScrollCenter:(CSLGlobalScrollCenterViewController *)arg1 didUpdateRevealPercent:(float)arg2;
- (void)globalScrollCenterDidPeak:(CSLGlobalScrollCenterViewController *)arg1;
@end

