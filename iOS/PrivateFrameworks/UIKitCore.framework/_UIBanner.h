//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIBanner-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSString, _UIBannerContent, _UIBannerManager, _UIBannerView;

__attribute__((visibility("hidden")))
@interface _UIBanner : NSObject <_UIBanner>
{
    _UIBannerView *_view;
    _UIBannerContent *_content;
    _UIBannerManager *_manager;
    NSLayoutConstraint *_visibleConstraint;
    NSLayoutConstraint *_hiddenConstraint;
    long long _state;
    NSMutableArray *_dismissalAnimations;
    NSMutableArray *_dismissalCompletionHandlers;
    NSMutableArray *_tapHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tapHandlers; // @synthesize tapHandlers=_tapHandlers;
@property(retain, nonatomic) NSMutableArray *dismissalCompletionHandlers; // @synthesize dismissalCompletionHandlers=_dismissalCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *dismissalAnimations; // @synthesize dismissalAnimations=_dismissalAnimations;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSLayoutConstraint *hiddenConstraint; // @synthesize hiddenConstraint=_hiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *visibleConstraint; // @synthesize visibleConstraint=_visibleConstraint;
@property(nonatomic) __weak _UIBannerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) _UIBannerContent *content; // @synthesize content=_content;
@property(retain, nonatomic) _UIBannerView *view; // @synthesize view=_view;
- (void)addTapHandler:(CDUnknownBlockType)arg1;
- (void)addDismissalCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDismissalAnimations:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)handleLongPressGesture:(id)arg1;
- (void)present;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

