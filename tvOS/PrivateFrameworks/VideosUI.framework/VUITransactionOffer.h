//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, VUIActionItunesExtras;

__attribute__((visibility("hidden")))
@interface VUITransactionOffer : NSObject
{
    NSDictionary *_transactionOfferDict;
    NSArray *_videosPlayables;
    NSDictionary *_offer;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *offer; // @synthesize offer=_offer;
@property(readonly, nonatomic) NSArray *videosPlayables;
@property(readonly, copy, nonatomic) VUIActionItunesExtras *extrasAction;
- (id)notificationBody;
- (id)notificationTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) _Bool playWhenDone;
- (id)initWithDictionary:(id)arg1;

@end

