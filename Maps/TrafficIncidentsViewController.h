/* TrafficIncidentsViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Maps-Structs.h"

@class NSMutableDictionary, UILabel, NSMutableArray, UIView, VKTrafficIncident, TrafficIncidentsHeaderView;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsViewController : XXUnknownSuperclass {
	TrafficIncidentsHeaderView* _tableHeaderView;
	UILabel* _incidentInfo;
	UILabel* _timeLabel;
	UIView* _tableFooterContainer;
	UILabel* _titleView;
	VKTrafficIncident* _incident;
	NSMutableArray* _sectionKeys;
	NSMutableDictionary* _sectionContents;
}
@property(retain, nonatomic) NSMutableDictionary* sectionContents;
@property(retain, nonatomic) NSMutableArray* sectionKeys;
@property(retain, nonatomic) VKTrafficIncident* incident;
-(CGSize)contentSizeForViewInPopover;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)_incidentInfo;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_updateTableFooter;
-(id)_tableFooterContainer;
-(id)_timeLabel;
-(void)_transformIncidentObject;
-(void)setTitle:(id)title;
-(id)_titleView;
-(void)viewDidLoad;
-(id)_tableHeaderView;
-(id)initWithStyle:(int)style;
-(void)_contentSizeDidChange:(id)_contentSize;
-(void)updateColors;
-(BOOL)isDimmed;
-(void)dealloc;
@end
