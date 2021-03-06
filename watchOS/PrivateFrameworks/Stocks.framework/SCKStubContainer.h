//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKContainerProxying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface SCKStubContainer : NSObject <SCKContainerProxying>
{
    _Bool _accountInfoSupportsDeviceToDeviceEncryption;
    int _modifyZonesErrorMode;
    unsigned int _modifyZonesOperationCount;
    NSArray *_modifyZonesSavedZones;
    int _zoneChangesErrorMode;
    CDUnknownBlockType _willFinishZoneChanges;
    unsigned int _zoneChangesOperationCount;
    int _modifyRecordsErrorMode;
    CDUnknownBlockType _willModifyRecords;
    unsigned int _modifyRecordsOperationCount;
    NSArray *_modifyRecordsSavedRecords;
    unsigned int _modifySubscriptionsOperationCount;
    NSArray *_modifySubscriptionsSavedSubscriptions;
    unsigned int _databaseChangesOperationCount;
    NSArray *_databaseChangesOperationChangedZoneIDs;
    int _accountInfoErrorMode;
    NSMutableDictionary *_zoneContentsByZoneID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *zoneContentsByZoneID; // @synthesize zoneContentsByZoneID=_zoneContentsByZoneID;
@property(nonatomic) int accountInfoErrorMode; // @synthesize accountInfoErrorMode=_accountInfoErrorMode;
@property(nonatomic) _Bool accountInfoSupportsDeviceToDeviceEncryption; // @synthesize accountInfoSupportsDeviceToDeviceEncryption=_accountInfoSupportsDeviceToDeviceEncryption;
@property(copy, nonatomic) NSArray *databaseChangesOperationChangedZoneIDs; // @synthesize databaseChangesOperationChangedZoneIDs=_databaseChangesOperationChangedZoneIDs;
@property(readonly, nonatomic) unsigned int databaseChangesOperationCount; // @synthesize databaseChangesOperationCount=_databaseChangesOperationCount;
@property(readonly, copy, nonatomic) NSArray *modifySubscriptionsSavedSubscriptions; // @synthesize modifySubscriptionsSavedSubscriptions=_modifySubscriptionsSavedSubscriptions;
@property(readonly, nonatomic) unsigned int modifySubscriptionsOperationCount; // @synthesize modifySubscriptionsOperationCount=_modifySubscriptionsOperationCount;
@property(readonly, copy, nonatomic) NSArray *modifyRecordsSavedRecords; // @synthesize modifyRecordsSavedRecords=_modifyRecordsSavedRecords;
@property(readonly, nonatomic) unsigned int modifyRecordsOperationCount; // @synthesize modifyRecordsOperationCount=_modifyRecordsOperationCount;
@property(copy, nonatomic) CDUnknownBlockType willModifyRecords; // @synthesize willModifyRecords=_willModifyRecords;
@property(nonatomic) int modifyRecordsErrorMode; // @synthesize modifyRecordsErrorMode=_modifyRecordsErrorMode;
@property(readonly, nonatomic) unsigned int zoneChangesOperationCount; // @synthesize zoneChangesOperationCount=_zoneChangesOperationCount;
@property(copy, nonatomic) CDUnknownBlockType willFinishZoneChanges; // @synthesize willFinishZoneChanges=_willFinishZoneChanges;
@property(nonatomic) int zoneChangesErrorMode; // @synthesize zoneChangesErrorMode=_zoneChangesErrorMode;
@property(readonly, copy, nonatomic) NSArray *modifyZonesSavedZones; // @synthesize modifyZonesSavedZones=_modifyZonesSavedZones;
@property(readonly, nonatomic) unsigned int modifyZonesOperationCount; // @synthesize modifyZonesOperationCount=_modifyZonesOperationCount;
@property(nonatomic) int modifyZonesErrorMode; // @synthesize modifyZonesErrorMode=_modifyZonesErrorMode;
- (int)_ckErrorCodeForErrorMode:(int)arg1;
- (id)_errorForErrorMode:(int)arg1 itemIDs:(id)arg2;
- (id)_errorForErrorMode:(int)arg1;
- (void)accountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDatabaseOperation:(id)arg1;
- (id)recordWithName:(id)arg1 inZone:(id)arg2;
- (id)contentsOfZone:(id)arg1 withType:(id)arg2;
- (id)contentsOfZone:(id)arg1;
- (void)setContentsOfZone:(id)arg1 toRecords:(id)arg2;
- (id)init;

@end

