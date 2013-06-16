/* MessagePrinter.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "UIPrintInteractionControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MFMessageViewingContextDelegate.h"

@class MFMessageViewingContext, MFMessageWebLayer, MFMailMessage, UIWebDocumentView, UIViewPrintFormatter, UIImage, MessageContentLayer;

__attribute__((visibility("hidden")))
@interface MessagePrinter : XXUnknownSuperclass <UIPrintInteractionControllerDelegate, MFMessageViewingContextDelegate> {
	MFMailMessage* _message;
	MFMessageWebLayer* _messageBodyView;
	UIWebDocumentView* _messageHeaderView;
	MessageContentLayer* _messageContentLayer;
	MFMessageViewingContext* _viewingContext;
	UIViewPrintFormatter* _headerFormatter;
	UIViewPrintFormatter* _bodyFormatter;
	UIImage* _contactPhoto;
	float _headerLastPageHeight;
	BOOL _headerLoaded;
	BOOL _viewingContextLoaded;
	BOOL _printableContentLoaded;
}
-(void)drawPageAtIndex:(int)index inRect:(CGRect)rect;
-(void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;
-(int)numberOfPages;
-(void)_initializePrintableContent;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)messageViewingContextContentLoadCompleted:(id)completed;
-(CGRect)_printingRectForImageableRect:(CGRect)imageableRect;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)printInteractionController;
-(void)printInteractionControllerWillPresentPrinterOptions:(id)printInteractionController;
-(void)presentPrintSheet;
-(void)presentPrintPopoverFromBarButtonItem:(id)barButtonItem;
-(id)initWithMailMessage:(id)mailMessage;
-(void)dealloc;
@end