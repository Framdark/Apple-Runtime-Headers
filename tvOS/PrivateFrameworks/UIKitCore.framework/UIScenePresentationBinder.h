//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/BSInvalidatable-Protocol.h>
#import <UIKitCore/FBSceneLayerManagerObserver-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>

@class FBSSceneSettingsDiffInspector, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIView;
@protocol UIScenePresentationBinderDelegate;

@interface UIScenePresentationBinder : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable>
{
    NSString *_identifier;
    UIView *_rootView;
    NSMutableSet *_scenes;
    long long _priority;
    unsigned long long _appearanceStyle;
    id <UIScenePresentationBinderDelegate> _delegate;
    _Bool _invalidated;
    NSMutableDictionary *_mapSceneIDToPresenter;
    FBSSceneSettingsDiffInspector *_settingsDiffInspector;
    struct {
        unsigned int delegateShouldPresentWithNoSceneLayers:1;
        unsigned int delegateDidStartPresentingScene:1;
        unsigned int delegateDidStopPresentingScene:1;
    } _delegateFlags;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScenePresentationBinderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *scenes; // @synthesize scenes=_scenes;
- (void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg1;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (void)_deactivatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_activatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_evaluateSceneForHosting:(id)arg1 forReason:(id)arg2;
- (void)_removeScene:(id)arg1 forReason:(id)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)_noteDidStopPresentingScene:(id)arg1;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (void)_delegateDidStopPresentingScene:(id)arg1;
- (void)_delegateDidStartPresentingScene:(id)arg1;
- (_Bool)_delegateShouldPresentSceneOnlyWhenLayersExist;
- (id)_rootView;
- (void)removeScene:(id)arg1;
- (void)addScene:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 rootView:(id)arg3 appearanceStyle:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

