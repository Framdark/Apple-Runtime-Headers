//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSCopying-Protocol.h>
#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@interface HKMCProjection : NSObject <NSSecureCoding, NSCopying>
{
    double _startMean;
    double _startStandardDeviation;
    double _endMean;
    double _endStandardDeviation;
    _Bool _partiallyLogged;
    CDStruct_800a618e _allDays;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isPartiallyLogged) _Bool partiallyLogged; // @synthesize partiallyLogged=_partiallyLogged;
@property(readonly, nonatomic) CDStruct_800a618e allDays; // @synthesize allDays=_allDays;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)_dayIndexFromMean:(double)arg1 standardDeviation:(double)arg2 coefficient:(double)arg3;
- (CDStruct_800a618e)startDayRange;
- (int)dayIndexFromEndWithCoefficient:(double)arg1;
- (int)dayIndexFromStartWithCoefficient:(double)arg1;
@property(readonly, nonatomic) CDStruct_800a618e mostLikelyDays;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartMean:(double)arg1 startStandardDeviation:(double)arg2 endMean:(double)arg3 endStandardDeviation:(double)arg4 allDays:(CDStruct_800a618e)arg5 partiallyLogged:(_Bool)arg6;

@end

