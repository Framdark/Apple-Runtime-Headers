//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying>
{
    NSMutableArray *_brokerRegionPushTopics;
    NSString *_primaryRegionTopic;
    NSMutableArray *_tsmRegionPushTopics;
    NSMutableArray *_tsmRegionURLs;
}

+ (Class)brokerRegionPushTopicsType;
+ (Class)tsmRegionURLsType;
+ (Class)tsmRegionPushTopicsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *primaryRegionTopic; // @synthesize primaryRegionTopic=_primaryRegionTopic;
@property(retain, nonatomic) NSMutableArray *brokerRegionPushTopics; // @synthesize brokerRegionPushTopics=_brokerRegionPushTopics;
@property(retain, nonatomic) NSMutableArray *tsmRegionURLs; // @synthesize tsmRegionURLs=_tsmRegionURLs;
@property(retain, nonatomic) NSMutableArray *tsmRegionPushTopics; // @synthesize tsmRegionPushTopics=_tsmRegionPushTopics;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPrimaryRegionTopic;
- (id)brokerRegionPushTopicsAtIndex:(unsigned int)arg1;
- (unsigned int)brokerRegionPushTopicsCount;
- (void)addBrokerRegionPushTopics:(id)arg1;
- (void)clearBrokerRegionPushTopics;
- (id)tsmRegionURLsAtIndex:(unsigned int)arg1;
- (unsigned int)tsmRegionURLsCount;
- (void)addTsmRegionURLs:(id)arg1;
- (void)clearTsmRegionURLs;
- (id)tsmRegionPushTopicsAtIndex:(unsigned int)arg1;
- (unsigned int)tsmRegionPushTopicsCount;
- (void)addTsmRegionPushTopics:(id)arg1;
- (void)clearTsmRegionPushTopics;

@end

