//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_protocol_configuration-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_protocol_configuration : NSObject <OS_sec_protocol_configuration>
{
    NSObject<OS_xpc_object> *dictionary;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

