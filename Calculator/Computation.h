/* Computation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Calculator-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableString;

__attribute__((visibility("hidden")))
@interface Computation : XXUnknownSuperclass {
	NSMutableString* _computationString;
	NSString* _displayString;
	NSRange _selectionRange;
}
@property(readonly, assign, nonatomic) NSString* displayString;
-(BOOL)shouldShowResult;
-(id)currentResult;
-(void)deselectOperand;
-(NSRange)rangeOfSelectedOperand;
-(NSRange)selectOperandAtDisplayIndex:(unsigned)displayIndex;
-(void)replaceDigit:(unsigned)digit;
-(void)deleteFromSelection;
-(void)insertDecimal;
-(void)insertDigit:(unsigned)digit;
-(void)deleteFromEnd;
-(void)addOperator:(id)anOperator;
-(void)addDecimal;
-(void)addDigit:(unsigned)digit;
-(id)_displayifyString:(id)string;
-(void)_updateDisplayString;
-(void)dealloc;
-(id)init;
-(id)initWithStartingValue:(id)startingValue;
@end
