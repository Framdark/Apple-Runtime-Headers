//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVFLParserItem : NSObject
{
    NSString *_name;
    double _fraction;
}

- (void).cxx_destruct;
@property(nonatomic) double fraction; // @synthesize fraction=_fraction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (double)_fractionForFractionTerm:(id)arg1;
- (_Bool)_parseWithVisualFormat:(id)arg1;
- (id)initWithName:(id)arg1 fraction:(double)arg2;
- (id)description;
- (id)initWithVisualFormat:(id)arg1;

@end

