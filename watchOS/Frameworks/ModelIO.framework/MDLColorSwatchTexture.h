//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLColorSwatchTexture : MDLTexture
{
    float _colorTemperature1;
    float _colorTemperature2;
    struct CGColor *_color1;
    struct CGColor *_color2;
    int _type;
}

- (id)generateDataAtLevel:(int)arg1;
- (id)initWithColorGradientFrom:(struct CGColor *)arg1 toColor:(struct CGColor *)arg2 name:(id)arg3 textureDimensions: /* Error: Ran out of types for this method. */;
- (id)initWithColorTemperatureGradientFrom:(float)arg1 toColorTemperature:(float)arg2 name:(id)arg3 textureDimensions: /* Error: Ran out of types for this method. */;

@end

