//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtensions:(id)arg1;
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(int)arg2;
- (void)addExtension:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

