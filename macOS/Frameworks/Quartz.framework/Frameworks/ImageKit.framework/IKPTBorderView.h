//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface IKPTBorderView : NSView
{
    NSColor *_borderColor;
    NSColor *_backgroundColor;
    unsigned long long _borders;
}

@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property unsigned long long borders; // @synthesize borders=_borders;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;

@end

