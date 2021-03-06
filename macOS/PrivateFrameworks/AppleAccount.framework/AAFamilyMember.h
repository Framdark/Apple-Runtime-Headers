//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface AAFamilyMember : NSObject
{
    BOOL _isMe;
    BOOL _isChild;
    BOOL _isSharingPurchases;
    BOOL _isOrganizer;
    BOOL _areParentalControlsEnabled;
    BOOL _isAskToBuyEnabled;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_appleID;
    NSNumber *_personID;
    NSString *_personIDHash;
    NSString *_altDSID;
    NSString *_title;
    NSDate *_joinDate;
    NSString *_iTunesNotLinkedMessage;
    NSString *_linkediTunesAppleID;
    NSNumber *_linkediTunesDSID;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isAskToBuyEnabled; // @synthesize isAskToBuyEnabled=_isAskToBuyEnabled;
@property(nonatomic) BOOL areParentalControlsEnabled; // @synthesize areParentalControlsEnabled=_areParentalControlsEnabled;
@property(copy, nonatomic) NSNumber *linkediTunesDSID; // @synthesize linkediTunesDSID=_linkediTunesDSID;
@property(copy, nonatomic) NSString *linkediTunesAppleID; // @synthesize linkediTunesAppleID=_linkediTunesAppleID;
@property(copy, nonatomic) NSString *iTunesNotLinkedMessage; // @synthesize iTunesNotLinkedMessage=_iTunesNotLinkedMessage;
@property(nonatomic) BOOL isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(nonatomic) BOOL isSharingPurchases; // @synthesize isSharingPurchases=_isSharingPurchases;
@property(nonatomic) BOOL isChild; // @synthesize isChild=_isChild;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSDate *joinDate; // @synthesize joinDate=_joinDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *personIDHash; // @synthesize personIDHash=_personIDHash;
@property(copy, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;

@end

