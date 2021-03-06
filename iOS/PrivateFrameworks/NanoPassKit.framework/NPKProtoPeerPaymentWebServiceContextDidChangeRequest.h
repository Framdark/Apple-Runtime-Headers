//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying>
{
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property(retain, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;
@property(readonly, nonatomic) _Bool hasPeerPaymentWebServiceContextData;

@end

