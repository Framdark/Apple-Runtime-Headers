//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterAccessViolationControlOperation, HMDNetworkRouterClientIdentifierList, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterAccessViolationControlOperation *_operation;
    HMDNetworkRouterClientIdentifierList *_clientIdentifierList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDNetworkRouterClientIdentifierList *clientIdentifierList; // @synthesize clientIdentifierList=_clientIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterAccessViolationControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

