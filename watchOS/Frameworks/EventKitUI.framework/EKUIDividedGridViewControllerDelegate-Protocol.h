//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKUIDividedGridViewCell, EKUIDividedGridViewController;

@protocol EKUIDividedGridViewControllerDelegate <NSObject>
- (void)dividedGridViewController:(EKUIDividedGridViewController *)arg1 didSelectCell:(EKUIDividedGridViewCell *)arg2 atIndex:(int)arg3;
- (void)dividedGridViewControllerDidLayout:(EKUIDividedGridViewController *)arg1;
@end

