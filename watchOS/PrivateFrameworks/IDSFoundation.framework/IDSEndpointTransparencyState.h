//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_pushToken;
    int _verificationState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int verificationState; // @synthesize verificationState=_verificationState;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqualToEndpointTransparencyState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPushToken:(id)arg1 verificationState:(int)arg2;

@end

