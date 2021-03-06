//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, REHTTPRequest;

@interface REHTTPResponse : NSObject
{
    REHTTPRequest *_request;
    struct __CFHTTPMessage *_message;
    int _statusCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (struct _CFHTTPServerResponse *)response;
- (id)headerValueForKey:(id)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSData *body;
@property(readonly, copy, nonatomic) NSDictionary *headerFields;
@property(copy, nonatomic) NSDate *date;
- (id)_dateFormatter;
@property(copy, nonatomic) NSString *contentType;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 statusCode:(int)arg2;

@end

