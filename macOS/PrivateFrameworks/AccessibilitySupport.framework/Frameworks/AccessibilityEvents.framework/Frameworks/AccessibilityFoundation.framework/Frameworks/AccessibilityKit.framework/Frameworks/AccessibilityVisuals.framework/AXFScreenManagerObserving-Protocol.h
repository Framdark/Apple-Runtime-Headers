//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityVisuals/NSObject-Protocol.h>

@class AXFScreen, AXFScreenManager, NSArray;

@protocol AXFScreenManagerObserving <NSObject>

@optional
- (void)screenManager:(AXFScreenManager *)arg1 mainScreenChanged:(AXFScreen *)arg2;
- (void)screenManager:(AXFScreenManager *)arg1 screensChanged:(NSArray *)arg2;
@end

