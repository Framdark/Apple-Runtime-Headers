//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <NSCopying>
{
    EDPETQuotaReachedEvent *_quotaEvent;
    NSData *_rawData;
    EDPETSubmittedEvent *_submittedEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) EDPETSubmittedEvent *submittedEvent; // @synthesize submittedEvent=_submittedEvent;
@property(retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent; // @synthesize quotaEvent=_quotaEvent;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRawData;
@property(readonly, nonatomic) _Bool hasSubmittedEvent;
@property(readonly, nonatomic) _Bool hasQuotaEvent;

@end

