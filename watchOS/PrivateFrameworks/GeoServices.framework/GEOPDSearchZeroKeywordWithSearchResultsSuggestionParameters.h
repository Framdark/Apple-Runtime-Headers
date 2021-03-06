//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxCategories;
    unsigned int _maxResultsPerCategory;
    struct {
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxCategories:1;
        unsigned int has_maxResultsPerCategory:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) unsigned int dayOfWeek;
@property(nonatomic) _Bool hasBlurredHourOfDay;
@property(nonatomic) unsigned int blurredHourOfDay;
@property(nonatomic) _Bool hasMaxResultsPerCategory;
@property(nonatomic) unsigned int maxResultsPerCategory;
@property(nonatomic) _Bool hasMaxCategories;
@property(nonatomic) unsigned int maxCategories;

@end

