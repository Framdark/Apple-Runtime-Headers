//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXKeyboardSettings : PXSettings
{
    _Bool _enableSelectionShortcuts;
    _Bool _enableAssetSelectionShortcuts;
    _Bool _enableBackgroundDimming;
    _Bool _enableShadow;
    double _focusChangeAnimationDuration;
    double _dimmingFactor;
    double _shadowYOffset;
    double _shadowBlurRadius;
    double _shadowOpacity;
    double _detailsViewOverlayAlpha;
}

+ (id)sharedInstance;
@property(nonatomic) double detailsViewOverlayAlpha; // @synthesize detailsViewOverlayAlpha=_detailsViewOverlayAlpha;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) double shadowYOffset; // @synthesize shadowYOffset=_shadowYOffset;
@property(nonatomic) double dimmingFactor; // @synthesize dimmingFactor=_dimmingFactor;
@property(nonatomic) _Bool enableShadow; // @synthesize enableShadow=_enableShadow;
@property(nonatomic) _Bool enableBackgroundDimming; // @synthesize enableBackgroundDimming=_enableBackgroundDimming;
@property(nonatomic) double focusChangeAnimationDuration; // @synthesize focusChangeAnimationDuration=_focusChangeAnimationDuration;
@property(nonatomic) _Bool enableAssetSelectionShortcuts; // @synthesize enableAssetSelectionShortcuts=_enableAssetSelectionShortcuts;
@property(nonatomic) _Bool enableSelectionShortcuts; // @synthesize enableSelectionShortcuts=_enableSelectionShortcuts;
- (id)globalFocusAnimationShadow;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setDefaultValues;
- (id)parentSettings;

@end

