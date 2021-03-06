//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KHProject, NSNumber, NSString;

@interface KHJPEGGenerator : NSObject
{
    BOOL _generateThumbnails;
    KHProject *_project;
    NSString *_thumbnailDirectoryName;
    struct CGSize _thumbnailEnclosingSize;
}

+ (BOOL)writeImage:(struct CGImage *)arg1 toPath:(id)arg2 option:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize thumbnailEnclosingSize; // @synthesize thumbnailEnclosingSize=_thumbnailEnclosingSize;
@property(retain, nonatomic) NSString *thumbnailDirectoryName; // @synthesize thumbnailDirectoryName=_thumbnailDirectoryName;
@property(nonatomic) BOOL generateThumbnails; // @synthesize generateThumbnails=_generateThumbnails;
@property(readonly, nonatomic) KHProject *project; // @synthesize project=_project;
- (void)generateLayoutBitmapsInDirectoryAtPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSNumber *compressionQuality;
@property(readonly, nonatomic) NSNumber *resolution;
- (BOOL)generateBitmapImageAtPath:(id)arg1 forLayout:(id)arg2;
- (void)dealloc;
- (id)initWithProject:(id)arg1;

@end

