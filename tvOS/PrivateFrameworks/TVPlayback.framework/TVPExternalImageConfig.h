//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TVPExternalImageConfig : NSObject
{
    _Bool _usesOneBasedImageIndexes;
    double _imageInterval;
    long long _imageCount;
    NSURL *_baseURL;
    NSString *_imageNameFormatString;
    NSString *_version;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *imageNameFormatString; // @synthesize imageNameFormatString=_imageNameFormatString;
@property(nonatomic) _Bool usesOneBasedImageIndexes; // @synthesize usesOneBasedImageIndexes=_usesOneBasedImageIndexes;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) long long imageCount; // @synthesize imageCount=_imageCount;
@property(nonatomic) double imageInterval; // @synthesize imageInterval=_imageInterval;

@end

