//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;
@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject
{
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (_Bool)hasCreditCardData;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)invalidateCreditCardData;
- (void)clearCreditCardData;
- (void)creditCardDataDidChange;
- (void)neverSaveCreditCardData:(id)arg1;
- (void)_removeNeverSaveCreditCardData:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCard:(id)arg1;
- (_Bool)isCreditCardDataSaved:(id)arg1;
- (void)saveCreditCardDataIfAllowed:(id)arg1;
- (void)saveCreditCardData:(id)arg1;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)arg1;
- (void)replaceCreditCardData:(id)arg1 withCard:(id)arg2;
- (void)removeCreditCardData:(id)arg1;
- (id)savableCreditCardDataInForm:(id)arg1;
- (id)defaultNameForCardOfType:(unsigned int)arg1 cardholderName:(id)arg2;
- (id)_uniqueCardNameForCardName:(id)arg1;
- (_Bool)shouldAddCardWithNumber:(id)arg1;
- (id)existingCardWithNumber:(id)arg1;
- (_Bool)shouldNeverSaveCardWithNumber:(id)arg1;
- (void)getCreditCardDataToFill:(id)arg1 externalizedContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getCreditCardDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *creditCardData;
- (void)_sortCreditCardDataArray:(id)arg1;
- (id)_creditCardData;
- (id)init;

@end

