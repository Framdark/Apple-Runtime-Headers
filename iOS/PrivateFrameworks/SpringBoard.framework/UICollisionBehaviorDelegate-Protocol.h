//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UICollisionBehavior;
@protocol NSCopying, UIDynamicItem;

@protocol UICollisionBehaviorDelegate <NSObject>

@optional
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3 atPoint:(struct CGPoint)arg4;
@end

