//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKConceptStore, HKDateCache, HKHealthRecordsStore, HKHealthStore, HKSampleTypeUpdateController, HKUCUMUnitDisplayConverter, HRWDUserActivityManager, WDClinicalSampleAccountsLoader, WDClinicalSourcesDataProvider, WDMedicalRecordCountProvider;

__attribute__((visibility("hidden")))
@interface HRProfile : NSObject
{
    HKConceptStore *_conceptStore;
    HKHealthStore *_healthStore;
    HKHealthRecordsStore *_healthRecordsStore;
    HKUCUMUnitDisplayConverter *_ucumDisplayConverter;
    WDClinicalSourcesDataProvider *_clinicalSourcesDataProvider;
    WDMedicalRecordCountProvider *_medicalRecordCountProvider;
    HKSampleTypeUpdateController *_updateController;
    HKDateCache *_dateCache;
    WDClinicalSampleAccountsLoader *_clinicalSampleAccountsLoader;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader; // @synthesize clinicalSampleAccountsLoader=_clinicalSampleAccountsLoader;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) HKSampleTypeUpdateController *updateController; // @synthesize updateController=_updateController;
@property(readonly, nonatomic) WDMedicalRecordCountProvider *medicalRecordCountProvider; // @synthesize medicalRecordCountProvider=_medicalRecordCountProvider;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider; // @synthesize clinicalSourcesDataProvider=_clinicalSourcesDataProvider;
@property(readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter; // @synthesize ucumDisplayConverter=_ucumDisplayConverter;
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKConceptStore *conceptStore;
@property(readonly, nonatomic) HRWDUserActivityManager *userActivityManager;
- (id)_initWithHealthRecordsStore:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;

@end

