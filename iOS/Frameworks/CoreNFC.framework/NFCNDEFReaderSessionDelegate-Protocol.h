//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NFCNDEFReaderSession, NSArray, NSError;

@protocol NFCNDEFReaderSessionDelegate <NSObject>
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didDetectNDEFs:(NSArray *)arg2;
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didInvalidateWithError:(NSError *)arg2;

@optional
- (void)readerSessionDidBecomeActive:(NFCNDEFReaderSession *)arg1;
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end

