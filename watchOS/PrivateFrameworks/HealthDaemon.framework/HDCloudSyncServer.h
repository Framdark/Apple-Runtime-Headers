//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDCloudSyncServerInterface-Protocol.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>
{
}

- (id)remote_fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_enableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_disableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudResetWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudSyncWithOptions:(unsigned int)arg1 reason:(int)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

