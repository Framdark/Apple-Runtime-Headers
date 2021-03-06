//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIView (TouchML)
+ (id)tmlLoadViewFromPath:(id)arg1;
+ (void)tmlLoadCategory;
- (void)tmlAccessibilityDecrement;
- (void)tmlAccessibilityIncrement;
- (_Bool)tmlAccessibilityActivate;
- (void)tmlLoadReusableView:(id)arg1;
- (void)tmlLoadViewFromPath:(id)arg1;
- (void)tmlLoadView:(id)arg1;
- (void)tmlLoadView;
- (void)_tmlUnloadContext;
- (void)_tmlEnsureContext:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TMLContext *tmlContext;
@property(copy, nonatomic) NSDictionary *tmlObjects;
@property(readonly, nonatomic) NSString *tmlViewPath;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(copy, nonatomic) NSArray *layoutGuides;
@property(copy, nonatomic) NSArray *constraints;
@property(copy, nonatomic) NSArray *subviews;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (void)tmlDidMoveToWindow;
@end

