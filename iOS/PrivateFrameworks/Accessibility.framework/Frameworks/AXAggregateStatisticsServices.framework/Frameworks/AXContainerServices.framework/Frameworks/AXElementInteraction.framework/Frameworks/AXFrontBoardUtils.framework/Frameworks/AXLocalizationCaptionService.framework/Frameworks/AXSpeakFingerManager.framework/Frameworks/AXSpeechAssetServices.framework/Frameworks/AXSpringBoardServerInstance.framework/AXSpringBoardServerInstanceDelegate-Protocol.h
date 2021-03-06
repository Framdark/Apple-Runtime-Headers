//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXSpringBoardServerInstance/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, _AXSpringBoardServerInstance;

@protocol AXSpringBoardServerInstanceDelegate <NSObject>
- (void)updateFrontMostApplicationWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isMagnifierVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)launchMagnifierAppWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)reactivateInCallServiceWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)forceLoadGAXBundleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)runningAppProcessesWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (id)focusedAppProcessWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isMultiTaskingActive;
- (_Bool)isPurpleBuddyAppFrontmostWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)focusedAppsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSettingsAppFrontmostWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSystemAppFrontmostExcludingSiri:(_Bool)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (NSArray *)runningAppPIDsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (int)purpleBuddyPIDWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSNumber *)focusedAppPIDWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSystemAppShowingAnAlertWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 performVoiceShortcutWithIdentifier:(NSString *)arg2 bundleID:(NSString *)arg3;
- (id)serverInstance:(_AXSpringBoardServerInstance *)arg1 splashImageForAppWithBundleIdentifier:(NSString *)arg2;
- (void)rebootDeviceWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)activateSOSModeWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)setDashBoardSystemGesturesEnabled:(_Bool)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (_Bool)isDarkModeActiveWithServiceInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)toggleDarkModeWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isGuidedAccessActiveWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isPIPWindowVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSpotlightVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)revealSpotlightWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)toggleSpotlightWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSDictionary *)medusaAppsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)canSetDockIconActivationModeForServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 setDockIconActivationMode:(unsigned long long)arg2;
- (_Bool)serverInstance:(_AXSpringBoardServerInstance *)arg1 performMedusaGesture:(unsigned long long)arg2;
- (NSArray *)allowedMedusaGesturesWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (double)reachabilityOffsetWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)unlockDeviceWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)wakeUpDeviceIfNecessaryWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSDictionary *)installedAppsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (id)serverInstance:(_AXSpringBoardServerInstance *)arg1 appWithIdentifier:(NSString *)arg2;
- (NSDictionary *)serverInstance:(_AXSpringBoardServerInstance *)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
- (_Bool)areSystemGesturesDisabledByAccessibilityWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)areSystemGesturesDisabledNativelyWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSpeakThisTemporarilyDisabledWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)hasActiveOrPendingCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)hasActiveEndpointCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)hasActiveCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 pauseMedia:(_Bool)arg2 forBundleId:(NSString *)arg3;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showSpeechPlaybackControls:(_Bool)arg2;
- (_Bool)isSyncingRestoringResettingOrUpdatingWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)simulateEdgePressHaptics:(_AXSpringBoardServerInstance *)arg1;
- (void)dismissAppSwitcherWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openAppSwitcherWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isPasscodeLockVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isShowingNonSystemAppWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isDockVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isAppSwitcherVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isShowingHomescreenWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSiriVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isControlCenterVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)armApplePayWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isStatusBarNativeFocusableWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)toggleDockWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 setReachabilityEnabled:(_Bool)arg2;
- (_Bool)serverInstance:(_AXSpringBoardServerInstance *)arg1 showNotificationCenter:(_Bool)arg2;
- (_Bool)serverInstance:(_AXSpringBoardServerInstance *)arg1 showControlCenter:(_Bool)arg2;
- (_Bool)isNotificationCenterVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isNotificationVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)toggleNotificationCenterWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isScreenshotWindowVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openVoiceControlWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)dismissSiriWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)resetDimTimerWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isMediaPlayingWithServerInstance:(_AXSpringBoardServerInstance *)arg1 forBundleId:(NSString *)arg2;
- (_Bool)isPasscodeRequiredOnLockWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isMakingEmergencyCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isSystemSleepingWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isScreenLockedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCommandAndControlVocabularyWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCommandAndControlCommandsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCommandAndControlSettingsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 setOrientationLocked:(_Bool)arg2;
- (_Bool)isOrientationLockedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isRingerMutedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)setReachabilityActive:(_Bool)arg1;
- (_Bool)isSideSwitchUsedForOrientationWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (double)volumeLevelWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)handleToggleIncomingCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)isVoiceControlRunningWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)hideAlertWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (_Bool)serverInstance:(_AXSpringBoardServerInstance *)arg1 isShowingRemoteViewType:(long long)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 hideRemoteViewType:(long long)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showRemoteViewType:(long long)arg2 withData:(id)arg3;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showAlertType:(int)arg2 withHandler:(void (^)(long long))arg3 withData:(id)arg4;
@end

