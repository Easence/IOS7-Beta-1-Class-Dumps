/* MKMapViewDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MKMapViewDelegate <NSObject>
@optional
-(void)mapView:(id)view didAddOverlayViews:(id)views;
-(id)mapView:(id)view viewForOverlay:(id)overlay;
-(void)mapView:(id)view didAddOverlayRenderers:(id)renderers;
-(id)mapView:(id)view rendererForOverlay:(id)overlay;
-(void)mapView:(id)view didChangeUserTrackingMode:(int)mode animated:(BOOL)animated;
-(void)mapView:(id)view annotationView:(id)view2 didChangeDragState:(unsigned)state fromOldState:(unsigned)oldState;
-(void)mapView:(id)view didFailToLocateUserWithError:(id)error;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(void)mapViewDidStopLocatingUser:(id)mapView;
-(void)mapViewWillStartLocatingUser:(id)mapView;
-(void)mapView:(id)view didDeselectAnnotationView:(id)view2;
-(void)mapView:(id)view didSelectAnnotationView:(id)view2;
-(void)mapView:(id)view annotationView:(id)view2 calloutAccessoryControlTapped:(id)tapped;
-(void)mapView:(id)view didAddAnnotationViews:(id)views;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)mapViewDidFinishRenderingMap:(id)mapView fullyRendered:(BOOL)rendered;
-(void)mapViewWillStartRenderingMap:(id)mapView;
-(void)mapViewDidFailLoadingMap:(id)mapView withError:(id)error;
-(void)mapViewDidFinishLoadingMap:(id)mapView;
-(void)mapViewWillStartLoadingMap:(id)mapView;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
-(void)mapView:(id)view regionWillChangeAnimated:(BOOL)region;
@end
