/* UITextViewDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import "UIScrollViewDelegate.h"
#import "NSObject.h"


@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
-(BOOL)textView:(id)view shouldInteractWithTextAttachment:(id)textAttachment inRange:(NSRange)range;
-(BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(NSRange)range;
-(void)textViewDidChangeSelection:(id)textView;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
@end
