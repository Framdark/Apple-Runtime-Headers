//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase
{
    NSString *_payloadApplication;
    NSNumber *_payloadAllowed;
    NSString *_payloadBundleID;
}

+ (id)buildRequiredOnlyWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
+ (id)buildWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadBundleID; // @synthesize payloadBundleID=_payloadBundleID;
@property(copy, nonatomic) NSNumber *payloadAllowed; // @synthesize payloadAllowed=_payloadAllowed;
@property(copy, nonatomic) NSString *payloadApplication; // @synthesize payloadApplication=_payloadApplication;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

