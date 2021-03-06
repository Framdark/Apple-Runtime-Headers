//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@protocol _INPBSearchForMessagesIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property(readonly, nonatomic) _Bool hasSender;
@property(retain, nonatomic) _INPBContactList *sender;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(retain, nonatomic) _INPBContactList *recipient;
@property(readonly, nonatomic) _Bool hasNotificationIdentifier;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(retain, nonatomic) _INPBStringList *identifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBStringList *groupName;
@property(readonly, nonatomic) _Bool hasDateTimeRange;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(retain, nonatomic) _INPBStringList *conversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
@property(retain, nonatomic) _INPBStringList *content;
@property(readonly, nonatomic) unsigned int attributesCount;
@property(readonly, nonatomic) int *attributes;
- (int)StringAsAttributes:(NSString *)arg1;
- (NSString *)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned int)arg2;
- (int)attributeAtIndex:(unsigned int)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@end

