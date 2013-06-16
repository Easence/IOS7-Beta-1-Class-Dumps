/* PlacePresentationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PlaceViewControllerDelegate.h"

@class PlaceViewController, UIViewController, SearchResult, UIPopoverController;
@protocol PlacePresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PlacePresentationController : XXUnknownSuperclass <PlaceViewControllerDelegate> {
	id<PlacePresentationControllerDelegate> _presentationDelegate;
	PlaceViewController* _placeViewController;
	UIViewController* _presentingViewController;
	UIPopoverController* _calloutPopoverController;
	SearchResult* _searchResult;
}
@property(retain, nonatomic) SearchResult* searchResult;
@property(assign, nonatomic) UIPopoverController* calloutPopoverController;
@property(assign, nonatomic) UIViewController* presentingViewController;
@property(retain, nonatomic) PlaceViewController* placeViewController;
@property(assign, nonatomic) id<PlacePresentationControllerDelegate> presentationDelegate;
-(void*)_newUnknownPerson;
-(void)_setRecord:(void*)record property:(int)property stringValue:(id)value label:(id)label;
-(void)placeViewControllerDidSelectReviews:(id)placeViewController;
-(void)placeViewControllerDidSelectPhotos:(id)placeViewController;
-(void)placeViewControllerDidSelectInfo:(id)placeViewController;
-(void)placeViewControllerDidLaunchYelp:(id)placeViewController;
-(void)placeViewControllerDidSelectReportAProblem:(id)placeViewController;
-(void)placeViewController:(id)controller didSelectActivityOfType:(id)type completed:(BOOL)completed;
-(void)placeViewController:(id)controller didSelectAddToBookmarksWithAddressIdentifier:(int)addressIdentifier title:(id)title;
-(void)placeViewController:(id)controller didSelectTransitDirectionsToAddressWithIdentifier:(int)identifier;
-(void)placeViewController:(id)controller didSelectDirectionsFromAddressWithIdentifier:(int)identifier;
-(void)placeViewController:(id)controller didSelectDirectionsToAddressWithIdentifier:(int)identifier;
-(void)placeViewControllerDidSelectRemovePin:(id)placeViewController;
-(void)placeViewControllerDidDismiss:(id)placeViewController;
-(void)_setupPlaceViewController:(id)controller;
-(void)dismissPresentedPlaceAnimated:(BOOL)animated;
-(void)updatePlaceWithSearchResult:(id)searchResult;
-(void)presentPlaceWithSearchResult:(id)searchResult animated:(BOOL)animated;
-(id)_placeViewControllerWithSearchResult:(id)searchResult;
-(void)dealloc;
@end
