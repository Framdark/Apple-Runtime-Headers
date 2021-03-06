//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentExecutionRequest-Protocol.h>

@class NSString, _INPBAppIdentifier;

@interface _INPBIntentExecutionRequest : PBCodable <_INPBIntentExecutionRequest, NSSecureCoding, NSCopying>
{
    CDStruct_a8e956ad _has;
    BOOL __encodeLegacyGloryData;
    int _encodingFormat;
    _INPBAppIdentifier *_appIdentifier;
    NSString *_encodedIntent;
    NSString *_encodedIntentDefinition;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(copy, nonatomic) NSString *encodedIntentDefinition; // @synthesize encodedIntentDefinition=_encodedIntentDefinition;
@property(copy, nonatomic) NSString *encodedIntent; // @synthesize encodedIntent=_encodedIntent;
@property(retain, nonatomic) _INPBAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)encodingFormatAsString:(int)arg1;
@property(nonatomic) BOOL hasEncodingFormat;
@property(readonly, nonatomic) BOOL hasEncodedIntentDefinition;
@property(readonly, nonatomic) BOOL hasEncodedIntent;
@property(readonly, nonatomic) BOOL hasAppIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

