//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKPaletteColorSwatch.h>

#import <PencilKit/PKPaletteMultiColorSwatchProperties-Protocol.h>

@class NSString, PKSwatchColor;

@interface PKPaletteMulticolorSwatch : PKPaletteColorSwatch <PKPaletteMultiColorSwatchProperties>
{
}

- (BOOL)wantsColorBulletVisible;
- (BOOL)wantsBackgroundViewColor;
- (id)newColorBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long colorUserInterfaceStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(nonatomic) BOOL showsSelectionHighlight;
@property(readonly) Class superclass;
@property(retain, nonatomic) PKSwatchColor *swatchColor;

@end

