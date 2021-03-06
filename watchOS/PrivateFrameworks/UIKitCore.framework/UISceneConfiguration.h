//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hadResolutionErrorsOnLoad;
    _Bool _isDefault;
    _Bool _fromPlist;
    NSString *_name;
    NSString *_role;
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationWithName:(id)arg1 sessionRole:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool _fromPlist; // @synthesize _fromPlist;
@property(readonly, nonatomic) _Bool _isDefault; // @synthesize _isDefault;
@property(readonly, nonatomic) _Bool _hadResolutionErrorsOnLoad; // @synthesize _hadResolutionErrorsOnLoad;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(retain, nonatomic) UIStoryboard *storyboard;
@property(retain, nonatomic) Class delegateClass;
@property(retain, nonatomic) Class sceneClass;
- (id)_initWithConfiguration:(id)arg1;
- (id)_initWithLoadErrorForSessionRole:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 sessionRole:(id)arg2;

@end

