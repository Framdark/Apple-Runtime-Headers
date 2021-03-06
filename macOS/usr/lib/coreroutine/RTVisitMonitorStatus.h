//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@interface RTVisitMonitorStatus : NSObject <NSCopying>
{
    BOOL _monitoringVisitIncidents;
    BOOL _monitoringLeechedVisitIncidents;
    BOOL _monitoringLowConfidenceVisitIncidents;
    unsigned long long _feedBufferReferenceCounter;
}

@property(nonatomic) unsigned long long feedBufferReferenceCounter; // @synthesize feedBufferReferenceCounter=_feedBufferReferenceCounter;
@property(nonatomic) BOOL monitoringLowConfidenceVisitIncidents; // @synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents;
@property(nonatomic) BOOL monitoringLeechedVisitIncidents; // @synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents;
@property(nonatomic) BOOL monitoringVisitIncidents; // @synthesize monitoringVisitIncidents=_monitoringVisitIncidents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)invalid;
- (id)description;
- (id)initWithMonitoringVisitIncidents:(BOOL)arg1 monitoringLeechedVisitIncidents:(BOOL)arg2 monitoringLowConfidenceVisitIncidents:(BOOL)arg3 feedBufferReferenceCounter:(unsigned long long)arg4;

@end

