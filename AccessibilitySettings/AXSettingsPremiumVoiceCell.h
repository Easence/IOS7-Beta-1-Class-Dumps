/* AXSettingsPremiumVoiceCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIProgressView;

__attribute__((visibility("hidden")))
@interface AXSettingsPremiumVoiceCell : XXUnknownSuperclass {
@private
	UIProgressView* _downloadProgressView;
	BOOL _showDownloading;
	float _downloadProgress;
}
@property(assign, nonatomic) float downloadProgress;
@property(assign, nonatomic) BOOL showDownloading;
+(float)downloadingHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end
