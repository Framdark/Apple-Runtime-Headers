//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDepartureFrequency-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSDate, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    _Bool _isEstimated;
    struct {
        unsigned int has_displayDepartureFrequency:1;
        unsigned int has_earliestDepartureTime:1;
        unsigned int has_latestDepartureTime:1;
        unsigned int has_maxDepartureFrequency:1;
        unsigned int has_minDepartureFrequency:1;
        unsigned int has_isEstimated:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasDisplayDepartureFrequency;
@property(nonatomic) unsigned int displayDepartureFrequency;
@property(nonatomic) _Bool hasIsEstimated;
@property(nonatomic) _Bool isEstimated;
@property(nonatomic) _Bool hasLatestDepartureTime;
@property(nonatomic) unsigned int latestDepartureTime;
@property(nonatomic) _Bool hasEarliestDepartureTime;
@property(nonatomic) unsigned int earliestDepartureTime;
@property(nonatomic) _Bool hasMaxDepartureFrequency;
@property(nonatomic) unsigned int maxDepartureFrequency;
@property(nonatomic) _Bool hasMinDepartureFrequency;
@property(nonatomic) unsigned int minDepartureFrequency;
@property(readonly, nonatomic) double frequencyForSorting;
- (_Bool)isValidAtDate:(id)arg1;
@property(readonly, nonatomic) int frequencyType;
@property(readonly, nonatomic) int maxFrequency;
@property(readonly, nonatomic) int minFrequency;
@property(readonly, nonatomic) int displayFrequency;
@property(readonly, nonatomic) _Bool isEstimate;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

