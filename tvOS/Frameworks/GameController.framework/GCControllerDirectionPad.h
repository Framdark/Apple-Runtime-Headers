//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput, NSString;

@interface GCControllerDirectionPad : GCControllerElement
{
    NSString *_descriptionName;
    _Bool _wasZeroed;
    int _timesPressed;
    _Bool _nonAnalog;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerAxisInput *_xAxis;
    GCControllerAxisInput *_yAxis;
}

- (void).cxx_destruct;
@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property(retain, nonatomic) GCControllerAxisInput *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) GCControllerAxisInput *xAxis; // @synthesize xAxis=_xAxis;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (int)getAndResetTimesPressed;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;
@property(readonly, nonatomic) GCControllerButtonInput *right;
@property(readonly, nonatomic) GCControllerButtonInput *left;
@property(readonly, nonatomic) GCControllerButtonInput *down;
@property(readonly, nonatomic) GCControllerButtonInput *up;
- (id)description;
- (_Bool)isAnalog;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (void)_fireValueChanged;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2 descriptionName:(id)arg3;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2;

@end

