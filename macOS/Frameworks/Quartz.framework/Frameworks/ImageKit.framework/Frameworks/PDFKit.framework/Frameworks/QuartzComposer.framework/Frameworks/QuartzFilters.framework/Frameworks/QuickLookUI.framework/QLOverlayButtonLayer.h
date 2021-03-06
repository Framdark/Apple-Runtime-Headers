//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookUI/QLOverlayBaseButtonLayer.h>

@class CALayer, NSImage;

__attribute__((visibility("hidden")))
@interface QLOverlayButtonLayer : QLOverlayBaseButtonLayer
{
    CALayer *_imageLayer;
    struct CGSize _imageOffset;
    NSImage *_image;
}

@property struct CGSize imageOffset; // @synthesize imageOffset=_imageOffset;
- (void)_endMouseDownAtPoint:(struct CGPoint)arg1;
- (void)_beginMouseDownAtPoint:(struct CGPoint)arg1;
- (BOOL)_enableClickAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property(retain) id image;
@property BOOL enabled;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)init;

@end

