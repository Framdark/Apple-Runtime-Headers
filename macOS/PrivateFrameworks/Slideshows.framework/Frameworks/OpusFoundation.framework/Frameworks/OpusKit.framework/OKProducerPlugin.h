//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle
{
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
    OKProducerContent *_content;
}

@property(retain, nonatomic) OKProducerContent *content; // @synthesize content=_content;
- (BOOL)isLoaded;
- (void)unloadRelease;
- (void)_unload;
- (BOOL)loadRetain;
- (BOOL)_load;
- (BOOL)hasExportedClass:(Class)arg1;
- (BOOL)hasLoadedClass:(Class)arg1;
- (void)_bundleDidLoad:(id)arg1;
- (void)setupJavascriptContext:(id)arg1;
- (id)producerWithDocument:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)audioURLs;
- (double)minimumContentVersion;
- (id)contentIdentifier;
- (id)exportedClassNames;
- (id)supportedResolutions;
- (id)localizedName;
- (unsigned long long)family;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

