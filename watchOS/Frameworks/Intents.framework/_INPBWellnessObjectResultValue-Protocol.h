//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString, _INPBWellnessValue;

@protocol _INPBWellnessObjectResultValue <NSObject>
+ (Class)valuesType;
@property(readonly, nonatomic) unsigned int valuesCount;
@property(copy, nonatomic) NSArray *values;
@property(readonly, nonatomic) _Bool hasUnit;
@property(retain, nonatomic) _INPBString *unit;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType;
@property(readonly, nonatomic) _Bool hasRecordDate;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate;
- (_INPBWellnessValue *)valuesAtIndex:(unsigned int)arg1;
- (void)addValues:(_INPBWellnessValue *)arg1;
- (void)clearValues;
- (int)StringAsResultType:(NSString *)arg1;
- (NSString *)resultTypeAsString:(int)arg1;
@end

