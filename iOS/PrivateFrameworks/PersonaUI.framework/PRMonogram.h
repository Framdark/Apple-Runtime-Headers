//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PRMonogramColor, UIColor;

@interface PRMonogram : NSObject
{
    NSString *_text;
    unsigned long long _fontIndex;
    UIColor *_color;
    PRMonogramColor *_monogramColor;
}

+ (void)updatePlateOverlayLayer:(id)arg1;
+ (id)plateOverlayLayer;
+ (double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2;
+ (id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2;
+ (unsigned long long)countOfFonts;
+ (id)_fontSpecs;
+ (id)monogram;
+ (id)monogramWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long fontIndex; // @synthesize fontIndex=_fontIndex;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (_Bool)_renderTextInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
- (id)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (id)stringAttributesForDiameter:(double)arg1;
- (void)setFontIndexToUnsupportedValue;
@property(readonly, nonatomic) UIColor *plateSelectedActiveTextColor;
@property(readonly, nonatomic) UIColor *plateSelectedInactiveColor;
@property(readonly, nonatomic) UIColor *plateSelectedActiveColor;
@property(readonly, nonatomic) UIColor *plateGradientEndColor;
@property(readonly, nonatomic) UIColor *plateGradientStartColor;
@property(readonly, nonatomic) UIColor *plateFlatColor;
- (id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3;
- (id)init;
- (void)_takeValuesFromDataRepresentation:(id)arg1;
- (id)dataRepresentationWithVersion:(unsigned char)arg1;
- (void)appendToRecipe:(id)arg1 text:(id)arg2 fontIndex:(unsigned char)arg3;
- (void)appendToRecipe:(id)arg1 text:(id)arg2;
- (id)dataRepresentation;
- (id)_initWithData:(id)arg1;

@end

