//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout
{
    id <PUHorizontalAlbumListGadgetLayoutDelegate> _horizontalLayoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate; // @synthesize horizontalLayoutDelegate=_horizontalLayoutDelegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) struct CGSize albumCellSize;
- (id)initWithHorizontalLayoutDelegate:(id)arg1;
- (id)init;

@end

