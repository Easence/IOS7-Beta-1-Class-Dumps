/* ShowContactsTest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ABPeoplePickerNavigationController;

__attribute__((visibility("hidden")))
@interface ShowContactsTest : XXUnknownSuperclass <UINavigationControllerDelegate> {
	BOOL _testFinished;
	ABPeoplePickerNavigationController* _peoplePicker;
	int _nextPersonIndex;
	int _maxPersonIndex;
}
@property(assign, nonatomic) BOOL testFinished;
@property(assign, nonatomic) int maxPersonIndex;
@property(assign, nonatomic) int nextPersonIndex;
@property(retain, nonatomic) ABPeoplePickerNavigationController* peoplePicker;
-(void).cxx_destruct;
-(void)showMembersList;
-(void)showNextPerson;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(BOOL)startTestWithOptions:(id)options peoplePicker:(id)picker;
-(void)dealloc;
@end