//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTStore.h>

@interface RTFingerprintStore : RTStore
{
}

- (void)_fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)purgePredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)storeFingerprints:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

