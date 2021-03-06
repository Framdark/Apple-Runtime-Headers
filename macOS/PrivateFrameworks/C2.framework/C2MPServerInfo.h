//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPServerInfo : PBCodable <NSCopying>
{
    NSString *_partition;
    NSString *_serviceBuild;
    NSString *_serviceInstance;
    NSString *_serviceName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasServiceInstance;
@property(readonly, nonatomic) BOOL hasServiceBuild;
@property(readonly, nonatomic) BOOL hasPartition;
@property(readonly, nonatomic) BOOL hasServiceName;

@end

