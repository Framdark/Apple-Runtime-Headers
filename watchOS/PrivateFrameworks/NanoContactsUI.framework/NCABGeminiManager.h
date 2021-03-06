//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoContactsUI/TUCallProviderManagerDelegate-Protocol.h>

@class CNGeminiManager, NSString, NSUserDefaults, TUCallProvider, TUCallProviderManager;

@interface NCABGeminiManager : NSObject <TUCallProviderManagerDelegate>
{
    _Bool _shouldShowSIMInfo;
    NSUserDefaults *_userDefaults;
    CNGeminiManager *_geminiManager;
    TUCallProviderManager *_callProviderManager;
    TUCallProvider *_telephonyProvider;
}

+ (id)_badgeTitleFromSenderIdentity:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)_updateShowSIMInfo;
- (id)_userDefaults;
@property(readonly, nonatomic) TUCallProvider *sharedPairedHostDeviceTelephonyProvider;
@property(readonly, nonatomic) CNGeminiManager *CNGeminiManager;
- (id)_CNGeminiManager;
@property(readonly, nonatomic) _Bool shouldShowSIMInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

