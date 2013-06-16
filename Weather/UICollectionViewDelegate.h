/* UICollectionViewDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import "UIScrollViewDelegate.h"


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
-(id)collectionView:(id)view transitionLayoutForOldLayout:(id)oldLayout newLayout:(id)layout;
-(void)collectionView:(id)view performAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)collectionView:(id)view canPerformAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didEndDisplayingSupplementaryView:(id)view2 forElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
-(BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didHighlightItemAtIndexPath:(id)indexPath;
-(BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
@end
