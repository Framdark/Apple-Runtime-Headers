//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HLPReachability, NSString;
@protocol HLPReachabilityManagerDelegate;

@interface HLPReachabilityManager : NSObject
{
    _Bool _notifying;
    _Bool _hostActive;
    _Bool _reachabilityInitialized;
    _Bool _connected;
    _Bool _internetActive;
    id <HLPReachabilityManagerDelegate> _delegate;
    HLPReachability *_internetReachability;
    HLPReachability *_hostReachability;
    NSString *_hostName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) HLPReachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property(retain, nonatomic) HLPReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(nonatomic) __weak id <HLPReachabilityManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool internetActive; // @synthesize internetActive=_internetActive;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool reachabilityInitialized; // @synthesize reachabilityInitialized=_reachabilityInitialized;
- (void)reachabilityChanged:(id)arg1;
- (void)stopNotifier;
- (void)startNotifier;
- (_Bool)isNetworkError:(id)arg1;
- (id)init;
- (void)dealloc;

@end

