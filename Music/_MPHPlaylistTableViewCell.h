/* _MPHPlaylistTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPUStackViewDataSource.h"

@class UIImageView, UIView, MPUStackView, MPImageCache, UIImage, NSArray;

__attribute__((visibility("hidden")))
@interface _MPHPlaylistTableViewCell : XXUnknownSuperclass <MPUStackViewDataSource> {
	UIImageView* _playlistTypeImageView;
	UIView* _separatorView;
	MPUStackView* _stackView;
	MPImageCache* _imageCache;
	UIImage* _placeholderImage;
	NSArray* _stackImageRequests;
}
@property(readonly, assign, nonatomic) MPUStackView* stackView;
@property(copy, nonatomic) NSArray* stackImageRequests;
@property(retain, nonatomic) UIImage* playlistTypeImage;
@property(retain, nonatomic) UIImage* placeholderImage;
@property(retain, nonatomic) MPImageCache* imageCache;
-(void).cxx_destruct;
-(id)_newStackView;
-(void)stackView:(id)view applyAttributesToItem:(id)item atIndex:(int)index;
-(void)stackView:(id)view didCreateItem:(id)item;
-(int)numberOfItemsInStackView:(id)stackView;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
