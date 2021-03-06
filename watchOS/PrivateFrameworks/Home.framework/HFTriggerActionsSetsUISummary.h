//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface HFTriggerActionsSetsUISummary : NSObject
{
    _Bool _needsIconSort;
    NSString *_uniqueServiceGroupName;
    unsigned int _numberOfScenes;
    unsigned int _numberOfStandaloneServices;
    unsigned int _numberOfMediaAccessories;
    unsigned int _totalStandaloneAndMediaAccessoriesCount;
    NSString *_firstSceneName;
    NSString *_firstServiceName;
    NSString *_mediaAccessoryName;
    NSMutableArray *_icons;
    NSMutableArray *_iconDescriptors;
    NSMutableDictionary *_iconCounter;
    NSString *_summaryDescription;
    NSArray *_summaryDescriptors;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsIconSort; // @synthesize needsIconSort=_needsIconSort;
@property(readonly, nonatomic) NSArray *summaryDescriptors; // @synthesize summaryDescriptors=_summaryDescriptors;
@property(readonly, nonatomic) NSString *summaryDescription; // @synthesize summaryDescription=_summaryDescription;
@property(retain, nonatomic) NSMutableDictionary *iconCounter; // @synthesize iconCounter=_iconCounter;
@property(retain, nonatomic) NSMutableArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *mediaAccessoryName; // @synthesize mediaAccessoryName=_mediaAccessoryName;
@property(retain, nonatomic) NSString *firstServiceName; // @synthesize firstServiceName=_firstServiceName;
@property(retain, nonatomic) NSString *firstSceneName; // @synthesize firstSceneName=_firstSceneName;
@property(nonatomic) unsigned int totalStandaloneAndMediaAccessoriesCount; // @synthesize totalStandaloneAndMediaAccessoriesCount=_totalStandaloneAndMediaAccessoriesCount;
@property(nonatomic) unsigned int numberOfMediaAccessories; // @synthesize numberOfMediaAccessories=_numberOfMediaAccessories;
@property(nonatomic) unsigned int numberOfStandaloneServices; // @synthesize numberOfStandaloneServices=_numberOfStandaloneServices;
@property(nonatomic) unsigned int numberOfScenes; // @synthesize numberOfScenes=_numberOfScenes;
@property(retain, nonatomic) NSString *uniqueServiceGroupName; // @synthesize uniqueServiceGroupName=_uniqueServiceGroupName;
- (void)addMediaAccessoryNamed:(id)arg1;
- (void)_sortIconDescriptors;
- (void)_incrementIconCounter:(id)arg1;
- (void)addIconDescriptor:(id)arg1;
- (void)addServiceNamed:(id)arg1;
- (void)addSceneNamed:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfIcons;
- (id)summaryIconDescriptors;
- (id)summaryIcons;
- (id)_descriptionForZeroScenes;
- (id)_descriptionForZeroAccessories;
- (id)summaryText:(_Bool)arg1;
- (id)summaryText;
@property(readonly, nonatomic) _Bool hasUniqueServiceGroup;
- (id)init;
- (id)initWithSummaryText:(id)arg1 summaryIconNames:(id)arg2;
- (id)initWithSummaryText:(id)arg1 summaryIconDescriptors:(id)arg2;

@end

