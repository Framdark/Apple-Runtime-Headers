//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSEntity : NSObject <SSXPCCoding>
{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    long long _pid;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
}

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)copyXPCEncoding;
- (void)_getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned int)arg3 message:(long long)arg4;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)__addCachedExternalValues:(id)arg1;
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_resetLocalIVars;
@property(readonly) long long _persistentIdentifier;
@property(readonly, getter=_isManaged) _Bool _managed;
- (void)_becomeManagedOnConnection:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSString *description;
- (id)valueForExternalProperty:(id)arg1;
- (_Bool)setExternalValuesWithDictionary:(id)arg1;
- (void)resetCachedProperties:(const id *)arg1 count:(unsigned int)arg2;
- (void)resetCachedExternalProperties:(const id *)arg1 count:(unsigned int)arg2;
- (void)getValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(unsigned int)arg3;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValuesWithDictionary:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned int)arg3;
@property(readonly) _Bool exists;
- (void)dealloc;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

