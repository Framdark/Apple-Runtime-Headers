//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying>
{
    unsigned long long _payloadSize;
    unsigned long long _timestamp;
    int _direction;
    NSString *_identifier;
    NSString *_messageName;
    int _messageType;
    NSString *_transactionID;
    int _transport;
    _Bool _isSecure;
    struct {
        unsigned int payloadSize:1;
        unsigned int timestamp:1;
        unsigned int direction:1;
        unsigned int messageType:1;
        unsigned int transport:1;
        unsigned int isSecure:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMessageName;
- (int)StringAsDirection:(id)arg1;
- (id)directionAsString:(int)arg1;
@property(nonatomic) _Bool hasDirection;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (int)StringAsTransport:(id)arg1;
- (id)transportAsString:(int)arg1;
@property(nonatomic) _Bool hasTransport;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool hasIsSecure;
@property(readonly, nonatomic) _Bool hasTransactionID;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasPayloadSize;
@property(nonatomic) _Bool hasTimestamp;

@end

