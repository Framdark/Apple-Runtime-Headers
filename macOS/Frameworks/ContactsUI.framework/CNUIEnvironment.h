//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSMutableCopying-Protocol.h>

@class CNContactStore, CNUIEditingPolicy, CNUIMeContactMonitor;
@protocol CNSchedulerProvider;

@interface CNUIEnvironment : NSObject <NSMutableCopying>
{
    CNContactStore *_defaultContactStore;
    CNContactStore *_contactStoreWithAllContacts;
    CNContactStore *_contactStoreWithLocalAndDonatedContacts;
    CNUIEditingPolicy *_editingPolicy;
    CNUIMeContactMonitor *_meContactMonitor;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (id)environmentWithEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (void)prewarmDefaultEnvionment;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNUIMeContactMonitor *meContactMonitor; // @synthesize meContactMonitor=_meContactMonitor;
@property(readonly, nonatomic) CNUIEditingPolicy *editingPolicy; // @synthesize editingPolicy=_editingPolicy;
@property(readonly, nonatomic) CNContactStore *contactStoreWithLocalAndDonatedContacts; // @synthesize contactStoreWithLocalAndDonatedContacts=_contactStoreWithLocalAndDonatedContacts;
@property(readonly, nonatomic) CNContactStore *contactStoreWithAllContacts; // @synthesize contactStoreWithAllContacts=_contactStoreWithAllContacts;
@property(readonly, nonatomic) CNContactStore *defaultContactStore; // @synthesize defaultContactStore=_defaultContactStore;
- (id)copyWithEditingPolicy:(id)arg1;
- (id)copyWithContactStore:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaultContactStore:(id)arg1 contactStoreWithAllContacts:(id)arg2 contactStoreWithLocalAndDonatedContacts:(id)arg3 editingPolicy:(id)arg4 meContactMonitor:(id)arg5 schedulerProvider:(id)arg6;
- (id)initWithDefaultValues;
- (id)init;

@end

