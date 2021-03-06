//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKGLTextInfo : NSObject
{
    NSString *_text;
    NSDictionary *_attributes;
    struct CGRect _specifiedRect;
    struct CGSize _textMinimalSize;
    float _alpha;
    BOOL _needsPostProcess;
    id _buffer;
    struct CGRect _region;
    struct CGRect _rect;
    unsigned int _textureID;
    int _subCacheSizeIndex;
    unsigned int _pageIndex;
    unsigned int _session;
}

@property unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;
@property unsigned int session; // @synthesize session=_session;
- (BOOL)needsPostProcess;
- (void)setNeedsPostProcess:(BOOL)arg1;
- (void)setSubCacheSizeIndex:(int)arg1;
- (int)subCacheSizeIndex;
- (void)setRegion:(struct CGRect)arg1;
- (struct CGRect)region;
- (void)setBuffer:(id)arg1;
- (id)buffer;
- (unsigned int)textureID;
- (void)setTextureID:(unsigned int)arg1;
- (struct CGRect)rect;
- (void)setRect:(struct CGRect)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (struct CGRect)specifiedRect;
- (void)setSpecifiedRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (float)alpha;
- (void)setAlpha:(float)arg1;
- (struct CGSize)minimalSizeForText;
- (void)setMinimalSizeForText:(struct CGSize)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

