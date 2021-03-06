//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface EXSNetworkController : NSObject
{
    unsigned int _powerConnection;
    struct IONotificationPort *_notificationPort;
    unsigned int _powerNotifierReference;
    NSMapTable *_reachabilityReferencesForWatchedSyncProtocols;
}

+ (id)sharedInstance;
+ (id)log;
- (void).cxx_destruct;
- (struct __SCNetworkReachability *)_newNetworkReachabilityReferenceForHostname:(id)arg1;
- (void)notifyWatchersOfSleepWake;
- (id)_watchedSyncProtocols;
- (void)stopListeningForPowerNotifications;
- (void)startListeningForPowerNotifications;
- (void)stopWatchingReachabilityForSyncProtocol:(id)arg1;
- (void)startWatchingReachabilityForSyncProtocol:(id)arg1;
- (id)init;

@end

