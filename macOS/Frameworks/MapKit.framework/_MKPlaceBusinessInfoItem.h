//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSColor, NSFont, NSString;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoItem : NSObject
{
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    NSFont *_font;
    NSColor *_textColor;
}

+ (id)itemWithDescription:(id)arg1 availability:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)setFont:(id)arg1 textColor:(id)arg2;
@property(readonly, nonatomic) NSAttributedString *displayString;

@end

