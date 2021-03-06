//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;

@interface PLOTARestoreMigrationSupport : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;
}

- (void).cxx_destruct;
- (_Bool)isOTARestoreInProgress;
- (id)_dataMigrationInfo;
- (void)_linkAsideAlbumMetadata;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1;
- (void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(_Bool)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (id)_assetTypesExcludedFromOTARestore;
- (_Bool)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;

@end

