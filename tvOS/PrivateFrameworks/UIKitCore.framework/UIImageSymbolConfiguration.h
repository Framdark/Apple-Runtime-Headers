//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIImageConfiguration.h>

@class NSString;
@protocol UIImageSymbolConfigurationProvider;

@interface UIImageSymbolConfiguration : UIImageConfiguration
{
    double _pointSize;
    struct {
        unsigned int hasFixedPointSize:1;
        unsigned int providerUpdates:1;
        unsigned int ignoresDynamicType:1;
    } _configFlags;
    long long _scale;
    double _customFontPointSizeMultiplier;
    long long _weight;
    NSString *_textStyle;
    id <UIImageSymbolConfigurationProvider> _provider;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationWithConfiguration:(id)arg1 and:(id)arg2;
+ (id)updatingConfigurationFromProvider:(id)arg1 scale:(long long)arg2;
+ (id)updatingConfigurationFromProvider:(id)arg1;
+ (id)configurationFromProvider:(id)arg1 scale:(long long)arg2;
+ (id)configurationFromProvider:(id)arg1;
+ (id)configurationWithFont:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithFont:(id)arg1;
+ (id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithTextStyle:(id)arg1;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2;
+ (id)configurationWithWeight:(long long)arg1;
+ (id)configurationWithPointSize:(double)arg1;
+ (id)configurationWithScale:(long long)arg1;
+ (id)unspecifiedConfiguration;
+ (id)defaultConfiguration;
+ (id)_defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic, setter=_setProvider:) __weak id <UIImageSymbolConfigurationProvider> provider; // @synthesize provider=_provider;
@property(copy, nonatomic, setter=_setTextStyle:) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic, setter=_setWeight:) long long weight; // @synthesize weight=_weight;
@property(nonatomic, setter=_setPointSizeScaleFactor:) double customFontPointSizeMultiplier; // @synthesize customFontPointSizeMultiplier=_customFontPointSizeMultiplier;
@property(nonatomic, setter=_setScale:) long long scale; // @synthesize scale=_scale;
- (void)_deriveGlyphSize:(long long *)arg1 weight:(long long *)arg2 pointSize:(double *)arg3;
- (_Bool)isEquivalentToConfiguration:(id)arg1;
- (_Bool)isSimilarToConfiguration:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)configurationWithUnspecifiedPointSizeAndWeight;
- (id)configurationWithoutPointSizeAndWeight;
- (id)configurationWithUnspecifiedWeight;
- (id)configurationWithoutWeight;
- (id)configurationWithUnspecifiedScale;
- (id)configurationWithoutScale;
- (id)configurationWithUnspecifiedTextStyle;
- (id)configurationWithoutTextStyle;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (_Bool)_shouldApplyConfiguration:(id)arg1;
- (void)_clearSpecificsExceptScale;
- (_Bool)_isUnspecified;
- (_Bool)_isUpdatingProvider;
- (_Bool)_hasSpecifiedProvider;
- (void)_setProvider:(id)arg1 updating:(_Bool)arg2;
- (_Bool)_hasSpecifiedTextStyle;
- (_Bool)_hasSpecifiedWeight;
- (_Bool)_hasFixedPointSize;
@property(nonatomic, setter=_setPointSizeForScalingWithTextStyle:) double pointSizeForScalingWithTextStyle;
@property(nonatomic, setter=_setFixedPointSize:) double fixedPointSize;
- (_Bool)_hasSpecifiedScale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTraitCollection:(id)arg1;

@end

