//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KonaClip, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ClipChangeLog : NSObject
{
    KonaClip *m_clip;
    NSMutableDictionary *m_capturedClipContents;
}

- (id)description;
- (void)restoreClipInProject:(id)arg1;
- (void)dealloc;
- (id)initWithClip:(id)arg1 project:(id)arg2;

@end

