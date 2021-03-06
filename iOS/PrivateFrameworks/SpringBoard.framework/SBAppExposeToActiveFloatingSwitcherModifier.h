//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBAppLayout, SBSwitcherModifier, SBSwitcherToActiveFloatingSwitcherModifier;

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    unsigned long long _direction;
    SBSwitcherModifier *_multitaskingModifier;
    SBAppLayout *_activeAppLayout;
    SBSwitcherToActiveFloatingSwitcherModifier *_switcherToActiveFloatingAppModifier;
    NSArray *_appLayoutsPriorToTransitionFromAppExpose;
}

- (void).cxx_destruct;
- (_Bool)_isEffectivelyActiveFloatingApp;
- (double)_unselectedCardScale;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5;

@end

