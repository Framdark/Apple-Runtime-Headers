//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigFCRCALayer : FigBaseCALayer
{
    struct OpaqueFigCaptionRendererCALayerInternal *layerInternal;
}

- (void)layoutSublayers;
- (void)compose;
- (void)setCallbacks:(id)arg1 userEvent:(CDUnknownFunctionPointerType)arg2 viewportChanged:(CDUnknownFunctionPointerType)arg3 drawInContext:(CDUnknownFunctionPointerType)arg4;
- (void)clear:(struct CGRect)arg1;
- (void)setVideoBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

