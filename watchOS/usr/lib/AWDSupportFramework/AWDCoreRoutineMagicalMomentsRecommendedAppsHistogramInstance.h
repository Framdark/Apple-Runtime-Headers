//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable <NSCopying>
{
    NSString *_bundleId;
    int _confidence;
    int _rank;
    struct {
        unsigned int confidence:1;
        unsigned int rank:1;
    } _has;
}

@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasRank;
@property(readonly, nonatomic) _Bool hasBundleId;
- (void)dealloc;

@end

