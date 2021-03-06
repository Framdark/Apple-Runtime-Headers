//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXGadgetProviderDelegate-Protocol.h>
#import <PhotosUICore/PXHorizontalCollectionGadgetDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PXHorizontalCollectionGadget;

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate>
{
    PXHorizontalCollectionGadget *_horizontalGadget;
    _Bool _hasLoaded;
    Class _horizontalCollectionGadgetClass;
    NSArray *_contentGadgetProviders;
    NSString *_title;
    unsigned long long _gadgetType;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpanForTraitCollection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *columnSpanForTraitCollection; // @synthesize columnSpanForTraitCollection=_columnSpanForTraitCollection;
@property(nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property(nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *contentGadgetProviders; // @synthesize contentGadgetProviders=_contentGadgetProviders;
- (void)_updateHorizontalGadget;
- (void)invalidateGadgets;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;
- (void)resetPriorityDate;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

