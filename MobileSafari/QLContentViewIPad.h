/* QLContentViewIPad.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "QLContentView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class QLDocumentInfoView, UIBarButtonItem, UIToolbar, OpenInApplicationBarButtonItem;

__attribute__((visibility("hidden")))
@interface QLContentViewIPad : XXUnknownSuperclass <QLContentView> {
	QLDocumentInfoView* _documentInfoView;
	UIToolbar* _buttonBar;
	OpenInApplicationBarButtonItem* _defaultApplicationButtonItem;
	UIBarButtonItem* _otherApplicationsButtonItem;
}
-(void)updateWithQuickLookDocument:(id)quickLookDocument;
-(void)_updateOtherApplicationsButtonItem;
-(void)_updateDefaultApplicationButtonItem:(id)item multipleApplications:(BOOL)applications;
-(void)layoutSubviews;
-(void)showBanner;
-(void)hideBanner;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame quickLookBannerViewDelegate:(id)delegate;
@end
