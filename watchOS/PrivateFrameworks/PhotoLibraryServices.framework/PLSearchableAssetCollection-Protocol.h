//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol PLSearchableAssetCollection <NSObject>
@property(readonly, nonatomic) unsigned int numberOfAssets;
@property(readonly, nonatomic) NSDate *searchableEndDate;
@property(readonly, nonatomic) NSDate *searchableStartDate;
@property(readonly, nonatomic) NSDate *keyAssetCreationDate;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned int)arg1;
- (unsigned int)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSString *)uuid;
@end

