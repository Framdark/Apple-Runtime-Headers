//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHDBDatabase.h>

#import <PhotoPrintProduct/KHBehaviorCacheProtocol-Protocol.h>
#import <PhotoPrintProduct/KHTextStyleCacheProtocol-Protocol.h>

@class KHDBDatabaseManager, KHSchemaVersion, NSDictionary, NSLock, NSMutableDictionary, NSString, NSURL;

@interface KHThemeDatabase : KHDBDatabase <KHBehaviorCacheProtocol, KHTextStyleCacheProtocol>
{
    NSString *_databaseName;
    NSLock *_behaviorMapLock;
    NSMutableDictionary *_behaviorMap;
    NSMutableDictionary *_treatmentBehaviorMap;
    NSLock *_behaviorAttributeLock;
    NSLock *_textStyleCacheLock;
    NSMutableDictionary *_behaviorAttributeCache;
    NSMutableDictionary *_textStyleCache;
}

+ (BOOL)usesSystemBundleCacheForTextStyles;
+ (void)setUsesSystemBundleCacheForTextStyles:(BOOL)arg1;
@property(readonly, nonatomic) NSDictionary *treatmentBehaviorMap; // @synthesize treatmentBehaviorMap=_treatmentBehaviorMap;
@property(readonly, nonatomic) NSDictionary *behaviorMap; // @synthesize behaviorMap=_behaviorMap;
- (void)flushTextStyleCache;
- (id)textStyleCache;
- (void)clearBehaviorAttributeCache;
@property(readonly, nonatomic) NSMutableDictionary *behaviorAttributeCache; // @synthesize behaviorAttributeCache=_behaviorAttributeCache;
- (void)unloadBehaviorMaps;
- (void)loadBehaviorMaps;
- (BOOL)openDatabaseWithOptions:(unsigned int)arg1;
@property(readonly, nonatomic) KHSchemaVersion *schemaVersion;
@property(readonly, nonatomic) KHDBDatabaseManager *databaseManager;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)initWithDatabasePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

