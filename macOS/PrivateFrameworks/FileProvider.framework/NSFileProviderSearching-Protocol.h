//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSFileProviderRequest, NSFileProviderSearchQuery;
@protocol NSFileProviderEnumerator;

@protocol NSFileProviderSearching <NSObject>
- (id <NSFileProviderEnumerator>)enumeratorForSearchQuery:(NSFileProviderSearchQuery *)arg1 request:(NSFileProviderRequest *)arg2 error:(id *)arg3;
@end

