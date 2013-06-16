/* RemindersCheckboxCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "UITextViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "RemindersCheckboxViewDelegate.h"
#import "RemindersListCell.h"
#import "Reminders-Structs.h"

@class UIView, NSURL, UILabel, UIButton, RemindersCheckboxView, UIColor, UILongPressGestureRecognizer, NSString, EKExpandingTextView, NSDictionary;
@protocol RemindersCheckboxCell;

@protocol RemindersCheckboxCell <NSObject>
@optional
-(void)checkboxCellDidTapClearButton:(id)checkboxCell;
-(void)checkboxCellDidTapCheckbox:(id)checkboxCell;
@end

__attribute__((visibility("hidden")))
@interface RemindersCheckboxCell : RemindersListCell <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {
	UILabel* _titleLabel;
	UILabel* _deadlineLabel;
	UILabel* _locationLabel;
	UILabel* _notesLabel;
	UILabel* _calendarLabel;
	UIButton* _clearButton;
	RemindersCheckboxView* _checkboxView;
	UIView* _linkHighlightView;
	UILongPressGestureRecognizer* _actionPressRecognizer;
	CGSize _titleLabelSize;
	CGSize _notesLabelSize;
	BOOL _titleLabelSizeValid;
	BOOL _notesLabelSizeValid;
	BOOL _representsHighlightedReminder;
	BOOL _completed;
	BOOL _overdue;
	BOOL _checkboxHidden;
	BOOL _checkboxEnabled;
	NSString* _title;
	NSString* _location;
	NSString* _deadline;
	NSString* _notes;
	NSString* _calendarName;
	UIColor* _calendarColor;
	int _priorityLevel;
	id<RemindersCheckboxCell> _delegate;
	id<UITextViewDelegate> _textViewDelegate;
	EKExpandingTextView* _textView;
	int _positionOfDeadline;
	int _clearButtonPosition;
	float _maxLayoutHeight;
	NSURL* _actionURL;
	NSString* _matchingSearchTerm;
	int _style;
	NSDictionary* _titleAttributes;
}
@property(retain, nonatomic) NSDictionary* titleAttributes;
@property(assign, nonatomic) int style;
@property(copy, nonatomic) NSString* matchingSearchTerm;
@property(copy, nonatomic) NSURL* actionURL;
@property(assign, nonatomic) BOOL checkboxEnabled;
@property(assign, nonatomic) BOOL checkboxHidden;
@property(readonly, assign, nonatomic, getter=isChecked) BOOL checked;
@property(assign, nonatomic) float maxLayoutHeight;
@property(assign, nonatomic) int clearButtonPosition;
@property(assign, nonatomic) int positionOfDeadline;
@property(readonly, assign, nonatomic) EKExpandingTextView* textView;
@property(assign, nonatomic) __weak id<UITextViewDelegate> textViewDelegate;
@property(assign, nonatomic) __weak id<RemindersCheckboxCell> delegate;
@property(assign, nonatomic) BOOL overdue;
@property(assign, nonatomic) BOOL completed;
@property(assign, nonatomic) int priorityLevel;
@property(copy, nonatomic) UIColor* calendarColor;
@property(copy, nonatomic) NSString* calendarName;
@property(copy, nonatomic) NSString* notes;
@property(copy, nonatomic) NSString* deadline;
@property(copy, nonatomic) NSString* location;
@property(copy, nonatomic) NSString* title;
+(float)lineSpacing;
+(float)bottomMargin;
+(float)rightMargin;
+(float)topMargin;
+(float)_maxTextWidthForCellWidth:(float)cellWidth;
+(float)cellHeightForTitle:(id)title hasDeadline:(BOOL)deadline hasLocation:(BOOL)location notes:(id)notes priorityLevel:(int)level showsCalendar:(BOOL)calendar width:(float)width;
+(float)_heightForNotes:(id)notes maxTextWidth:(float)width;
+(float)_heightForTitle:(id)title priorityLevel:(int)level maxTextWidth:(float)width;
+(void)_styleTitleLabel:(id)label withTitle:(id)title completed:(BOOL)completed;
+(id)_newDetailLabel;
+(void)_styleDetailLabel:(id)label completed:(BOOL)completed;
+(id)_titleLabelHeightCache;
-(void).cxx_destruct;
-(void)endEditing;
-(void)beginEditing;
-(void)_textViewTextChanged:(id)changed;
-(void)_removeTextView;
-(void)_addTextView;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_tap:(id)tap;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)layoutSubviews;
-(float)layoutHeight;
-(CGPoint)layoutTitleWithDetailHeight:(float)detailHeight distanceFromLeftEdge:(float)leftEdge maxContentX:(float)x;
-(void)layoutDetailLabelsStartingAtPoint:(CGPoint)point deadlineHeight:(float)height locationHeight:(float)height3 hasNotesLabel:(BOOL)label maxContentX:(float)x;
-(float)maxWidthForLabels;
-(void)setFrame:(CGRect)frame;
-(void)checkboxTapped;
-(void)_updateClearButton;
-(void)_clearButtonTapped:(id)tapped;
-(void)updateCalendarLabel;
-(id)priorityImageForLevel:(int)level;
-(CGSize)notesLabelSize;
-(void)_updateTextViewText;
-(void)_updateTitleLabel;
-(id)titleAttributedString;
-(CGSize)titleLabelSize;
-(void)updateLabelColors;
-(id)newDetailLabel;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
