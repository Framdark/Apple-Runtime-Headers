//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSWindow;

@interface QLWindowEffect : NSObject
{
    unsigned int _effectID;
    NSWindow *_window;
    CDUnknownBlockType _preparationBlock;
    CDUnknownBlockType _completionBlock;
    NSMapTable *_childWindows;
}

+ (double)QLEaseInLongEaseOutValueForProgress:(double)arg1 isInverted:(BOOL)arg2;
@property unsigned int effectID; // @synthesize effectID=_effectID;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(copy) CDUnknownBlockType completionBlock;
@property(copy) CDUnknownBlockType preparationBlock;
- (void)windowDidUpdate;
- (void)done;
- (void)abort;
- (void)_restoreChildWindows;
- (void)invoke;
- (id)prepare;
- (void)finalize;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end

