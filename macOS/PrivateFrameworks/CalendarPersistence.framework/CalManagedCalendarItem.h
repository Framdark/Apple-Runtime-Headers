//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import <CalendarPersistence/ETagObject-Protocol.h>
#import <CalendarPersistence/OccurrenceModelProtocol-Protocol.h>
#import <CalendarPersistence/StoresUnrecognizedICS-Protocol.h>

@class CalManagedCalendar, CalManagedICSElementProperties, CalManagedLocation, CalManagedRecurrenceSet, NSData, NSDate, NSDictionary, NSManagedObjectID, NSMutableSet, NSNumber, NSString, NSTimeZone, NSURL;
@protocol CalendarModelProtocol, EKProtocolParticipant, EKProtocolStructuredLocation;

@interface CalManagedCalendarItem : CalManagedObject <ETagObject, OccurrenceModelProtocol, StoresUnrecognizedICS>
{
    NSString *_path;
    BOOL _currentlyModifyingDefaultAlarms;
}

+ (id)mastersForItems:(id)arg1;
+ (id)datesByExpandingRecurrenceRuleString:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(BOOL)arg7 lunarCalendarString:(id)arg8;
+ (id)datesByExpandingRecurrenceRuleString:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(BOOL)arg7;
+ (BOOL)_isLunarBirthdayRecurrenceRule:(id)arg1 lunarCalendarString:(id)arg2;
+ (id)_datesByExpandingNonFastPathRecurrenceRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(BOOL)arg7;
+ (void)_adjustTimeZoneString:(id *)arg1 andRecurrenceDate:(id *)arg2 forAllDay:(BOOL)arg3;
+ (id)_datesByExpandingLunarBirthdayFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3 timeZoneString:(id)arg4 recurrenceStartDate:(id)arg5 isAllDay:(BOOL)arg6 lunarCalendarString:(id)arg7;
+ (id)_formBirthdayFromBirthDate:(id)arg1 calendar:(id)arg2;
+ (id)_datesByExpandingFastPathRecurrenceRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(BOOL)arg7;
+ (id)_ruleForRuleString:(id)arg1;
+ (void)withCalendarInTimezoneString:(id)arg1 do:(CDUnknownBlockType)arg2;
+ (id)calendarItemsWithSharedUID:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)calendarItemsWithFilenames:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)batchCalendarItemsWithSharedUIDsHelper:(id)arg1 inCalendar:(id)arg2 inContext:(id)arg3;
+ (id)batchCalendarItemsWithSharedUIDs:(id)arg1 inCalendar:(id)arg2 inContext:(id)arg3;
+ (id)masterItemWithSharedUID:(id)arg1 inCalendar:(id)arg2;
+ (id)masterItemWithLocalUID:(id)arg1 inCalendar:(id)arg2;
+ (id)fetchRequestWithSharedUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestWithLocalUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)recognizedICSPropertyParameterMap;
+ (id)recognizedICSProperties;
+ (id)entityName;
+ (id)iCalendarDocumentWithCalendarItems:(id)arg1 options:(unsigned long long)arg2;
+ (id)icsDateForDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3;
+ (id)calendarItemUIDFromCalendarItemPath:(id)arg1;
+ (id)_icsStringForDateTime:(id)arg1 floating:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_nsCalendar;
- (void)setRelatedExternalID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
- (id)enclosingSource;
- (id)attachmentsLocation;
- (void)updateAttachmentDerivedDataProcessChanges:(BOOL)arg1;
- (void)updateAttachmentDerivedData;
- (id)attachmentWithFileName:(id)arg1;
- (void)setDefaultAlarmWasDeleted:(BOOL)arg1;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, nonatomic) BOOL organizedByMe;
- (void)setOrganizerPhoneNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerPhoneNumber;
- (void)setOrganizerEncodedLikenessData:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
- (void)setOrganizerEmail:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
- (void)setOrganizerURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
- (void)setOrganizerName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
- (void)setTimeZoneObject:(id)arg1;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)allDay;
- (void)setStartDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
- (void)setRecurrenceRuleString:(id)arg1;
- (void)setScheduleAgentString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
- (BOOL)isEvent;
- (BOOL)isReminder;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
- (id)attendeeSet;
- (id)attachmentSet;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setCalendarItemPermissionNumber:(id)arg1;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
- (id)alarmSet;
- (void)setPriorityNumber:(id)arg1;
- (id)priorityNumber;
- (void)setEkStructuredLocation:(id)arg1;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
- (id)committedMasterItem;
- (id)masterItem;
@property(retain) NSDate *creationDate; // @dynamic creationDate;
@property(retain) NSString *serverFilename; // @dynamic serverFilename;
- (BOOL)isFloating;
- (id)earliestAlarmTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3;
- (void)applyServerAcknowledgementToLocal;
- (void)applyLocalAcknowledgedmentToServer;
- (void)applyAcknowledgeDate:(id)arg1 toAlarms:(id)arg2;
- (id)mostRecentAlarmAcknowledgement;
- (id)mostRecentServerDefaultAlarmAcknowledgement;
- (id)mostRecentLocalDefaultAlarmAcknowledgement;
- (id)mostRecentAlarmAcknowledgementForSet:(id)arg1;
- (id)startDateAdjustedFromUTC;
- (long long)customAlarmCount;
- (void)undeleteDefaultAlarms;
- (void)undeleteDefaultAlarmsHelper:(id)arg1;
- (void)deleteDefaultAlarms;
- (void)deleteDefaultAlarmsHelper:(id)arg1 forType:(int)arg2;
- (BOOL)isDefaultAlarmDeleted;
- (BOOL)isLocalDefaultAlarmDeleted;
- (BOOL)isServerDefaultAlarmDeleted;
- (BOOL)defaultAlarmsDeletedHelper:(id)arg1;
- (id)derivedLocalDefaultAlarmsProcessChanges:(BOOL)arg1;
- (id)derivedLocalDefaultAlarms;
- (id)derivedServerDefaultAlarmsProcessChanges:(BOOL)arg1;
- (id)derivedServerDefaultAlarms;
- (id)derivedAlarmsProcessChanges:(BOOL)arg1;
- (id)derivedAlarms;
- (id)allAlarms;
- (id)actualAlarms;
- (void)derivedAlarmsHelperForDefaultAlarmReferences:(id)arg1 existingDefaultAlarms:(id)arg2 explicitlyFromServer:(BOOL)arg3 processChanges:(BOOL)arg4;
- (id)defaultAlarmSortDescriptors;
- (void)alarmLogHelper:(id)arg1;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2;
- (id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(BOOL)arg1;
- (id)defaultAlarmsBasedOnItemAndPreferences;
- (void)clearETags;
- (id)relationshipsToCompareForMerge;
- (id)attributesToCompareForMerge;
- (BOOL)shouldWarnUserOnMoveToExchangeCalendar:(id)arg1;
- (id)exchangeAlarm;
- (void)makeExchangeCompatible;
- (id)_makeExchangeCompatible;
- (BOOL)isExchangeCompatible;
- (void)refreshRelationships;
- (id)computeChecksum;
- (void)refreshObjects:(id)arg1;
- (void)updateAlarmDerivedProperties;
- (void)_updateAlarmDerivedPropertiesForSave;
- (void)willSave;
- (void)awakeFromFetch;
- (void)refreshPath;
- (BOOL)didPathChange;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *directory;
@property(readonly) NSString *filename;
@property(readonly) NSString *filenameWithoutExtension;
- (void)updateScheduleTag:(id)arg1;
- (void)updateETag:(id)arg1;
- (void)setScheduleTag:(id)arg1;
- (void)setETag:(id)arg1;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
@property(retain) NSURL *dropBoxLocationOverrideBaseURL;
@property(retain) NSDate *startDate; // @dynamic startDate;
@property(retain) NSURL *url;
- (id)rawTitle;
- (void)willRefresh:(BOOL)arg1;
- (id)contextForValidationError;
- (id)keysOnlyRelevantToNetworkDetails;
- (void)prepareForDeletion;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (BOOL)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 deletionBlock:(CDUnknownBlockType)arg6;
- (BOOL)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5;
- (void)importManagedAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3;
- (void)_importNonManagedAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3;
- (void)_importNonManagedAttachment:(id)arg1 fromComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 withOldAttachments:(id)arg5;
- (void)_truncateToMaxNumberOfAttachmentsIfNecessary:(id)arg1;
- (void)_removeDuplicateAttachments:(id)arg1;
- (void)_importAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3;
- (void)_preprocessAttachmentsFromComponent:(id)arg1;
- (void)_importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 omitSyncRecord:(BOOL)arg6;
- (BOOL)importRecurrenceRuleSetFromRelatedTo:(id)arg1 inCalendar:(id)arg2 allowChangeOfSharedUID:(BOOL)arg3 inContext:(id)arg4;
- (void)_updateAfterStartDateWithComponent:(id)arg1;
- (id)iCalendarDocumentWithOptions:(unsigned long long)arg1;
- (BOOL)isValidManagedObject;
- (void)_updateWithEntity:(id)arg1 alarms:(BOOL)arg2 omitSyncRecord:(BOOL)arg3 inCalendar:(id)arg4 processChanges:(BOOL)arg5;
- (void)updateWithEntity:(id)arg1 alarms:(BOOL)arg2 inCalendar:(id)arg3;
- (void)updateWithEntity:(id)arg1 inCalendar:(id)arg2;
- (id)occurrenceID;
- (Class)entityClass;
- (void)processForType:(int)arg1 forParentCR:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;
- (void)_addOrganizerScheduleAgentClient;
- (void)_uploadAttachmentsInContext:(id)arg1;
- (BOOL)isScheduledEventWithKnownBadUID;
- (id)_uidKeyWithPhantomDetails;
- (id)migrateCanonicalForm;
- (int)migrateMatchType;

// Remaining properties
@property(retain) NSMutableSet *attachments; // @dynamic attachments;
@property(nonatomic) BOOL cachedLocalDefaultAlarmDeleted; // @dynamic cachedLocalDefaultAlarmDeleted;
@property(nonatomic) BOOL cachedServerDefaultAlarmDeleted; // @dynamic cachedServerDefaultAlarmDeleted;
@property(retain) CalManagedCalendar *calendar; // @dynamic calendar;
@property(retain) NSString *calendarServerAccess; // @dynamic calendarServerAccess;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(retain) NSString *changeKey; // @dynamic changeKey;
@property int classification; // @dynamic classification;
@property(copy, nonatomic) NSString *contactIdentifiersString; // @dynamic contactIdentifiersString;
@property(retain) NSMutableSet *customAlarms; // @dynamic customAlarms;
@property(retain) NSDate *dateStamp; // @dynamic dateStamp;
@property(readonly, copy) NSString *debugDescription;
@property BOOL deleteSyncRecord; // @dynamic deleteSyncRecord;
@property(readonly, copy) NSString *description;
@property(retain) NSNumber *dropBoxFreeBytes; // @dynamic dropBoxFreeBytes;
@property(retain) NSString *dropBoxLocation; // @dynamic dropBoxLocation;
@property(readonly, retain) NSString *eTag; // @dynamic eTag;
@property BOOL hasAlarm; // @dynamic hasAlarm;
@property BOOL hasAttachment; // @dynamic hasAttachment;
@property BOOL hasDropBox; // @dynamic hasDropBox;
@property(readonly) unsigned long long hash;
@property BOOL isAllDay; // @dynamic isAllDay;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(retain) NSString *itemID; // @dynamic itemID;
@property(retain) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(retain) NSMutableSet *localDefaultAlarms; // @dynamic localDefaultAlarms;
@property(copy, nonatomic) NSData *localStructuredData; // @dynamic localStructuredData;
@property(retain) NSString *localUID; // @dynamic localUID;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property BOOL needsServerConfirmation; // @dynamic needsServerConfirmation;
@property(retain) NSString *notes; // @dynamic notes;
@property BOOL omitSyncRecord; // @dynamic omitSyncRecord;
@property int permission; // @dynamic permission;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSString *previousProdID; // @dynamic previousProdID;
@property(retain) NSString *recurrenceRule; // @dynamic recurrenceRule;
@property(retain) CalManagedRecurrenceSet *recurrenceSet; // @dynamic recurrenceSet;
@property(retain) NSString *relatedExternalIdentifier; // @dynamic relatedExternalIdentifier;
@property(readonly, retain) NSString *scheduleTag; // @dynamic scheduleTag;
@property(retain) NSNumber *sequence; // @dynamic sequence;
@property(retain) NSMutableSet *serverDefaultAlarms; // @dynamic serverDefaultAlarms;
@property(retain) NSString *sharedUID; // @dynamic sharedUID;
@property(retain) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSData *structuredData; // @dynamic structuredData;
@property(retain) CalManagedLocation *structuredLocation; // @dynamic structuredLocation;
@property(readonly) Class superclass;
@property(retain) NSDate *syncMalfunctionDetected; // @dynamic syncMalfunctionDetected;
@property BOOL syncNeeded; // @dynamic syncNeeded;
@property(retain) NSString *timeZone; // @dynamic timeZone;
@property(retain) NSString *title; // @dynamic title;
@property(retain) NSString *universalIdentifier; // @dynamic universalIdentifier;
@property(retain) CalManagedICSElementProperties *unrecognizedICSProperties; // @dynamic unrecognizedICSProperties;

@end

