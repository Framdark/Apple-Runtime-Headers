//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATArbitratorRegistrationEntry : NSObject
{
    id mResource;
    unsigned long long mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
    unsigned long long _currentCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
- (id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)arg1;
- (void)servicePendingWaitTokens;
- (void)pendingWaitsNeedServicing;
- (void)resourceProxyDidInvalidate:(id)arg1;
- (void)invalidate;
- (id)waitForResourceWithExclusive:(BOOL)arg1 group:(id)arg2;
- (id)makeResourceProxyIfPossible:(BOOL)arg1;
- (id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2;

@end

