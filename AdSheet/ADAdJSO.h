/* ADAdJSO.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AdSheet-Structs.h"
#import "ADAdJSO_Bindings.h"
#import "ADJavaScriptObject.h"

@class NSNumber, NSDictionary, NSString, NSMutableDictionary, NSObject, AdSheetJSSetWallpaperRequest, ADCalendarJSO, ADStoreJSO, ADCameraJSO, ADBooksJSO, ADSMSComposerJSO, ADMailComposerJSO, ADContactsJSO, ADTwitterJSO, ADReminderComposerJSO, ADPassbookJSO, ADRewardsJSO, JSValue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ADAdJSO : ADJavaScriptObject <ADAdJSO_Bindings> {
	BOOL _isCoalescingShakeEvents;
	ADStoreJSO* _store;
	ADCalendarJSO* _calendar;
	ADCameraJSO* _camera;
	ADBooksJSO* _books;
	ADSMSComposerJSO* _smsComposer;
	ADMailComposerJSO* _mailComposer;
	ADContactsJSO* _contacts;
	ADTwitterJSO* _twitterComposer;
	ADReminderComposerJSO* _reminderComposer;
	ADPassbookJSO* _passbook;
	ADRewardsJSO* _rewards;
	unsigned _currentSupportedInterfaceOrientations;
	NSMutableDictionary* _bannerParametersDictionary;
	AdSheetJSSetWallpaperRequest* _wallpaperRequest;
	int _currentNetworkType;
	NSDictionary* _ringtoneData;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
}
@property(assign, nonatomic) __weak JSValue* deviceVolumeListener;
@property(assign, nonatomic) __weak JSValue* writeImageListener;
@property(assign, nonatomic) __weak JSValue* networkTypeListener;
@property(assign, nonatomic) __weak JSValue* deviceOrientationListener;
@property(assign, nonatomic) __weak JSValue* shakeEventsListener;
@property(assign, nonatomic) __weak JSValue* listener;
@property(readonly, assign, nonatomic) ADRewardsJSO* rewards;
@property(readonly, assign, nonatomic) ADPassbookJSO* passbook;
@property(readonly, assign, nonatomic) ADReminderComposerJSO* reminderComposer;
@property(readonly, assign, nonatomic) ADTwitterJSO* twitterComposer;
@property(readonly, assign, nonatomic) ADContactsJSO* contacts;
@property(readonly, assign, nonatomic) ADMailComposerJSO* mailComposer;
@property(readonly, assign, nonatomic) ADSMSComposerJSO* smsComposer;
@property(readonly, assign, nonatomic) ADBooksJSO* books;
@property(readonly, assign, nonatomic) ADCameraJSO* camera;
@property(readonly, assign, nonatomic) ADStoreJSO* store;
@property(readonly, assign, nonatomic) ADCalendarJSO* calendar;
@property(readonly, assign, nonatomic) int networkType;
@property(readonly, assign, nonatomic) NSString* bannerCustomMetadata;
@property(readonly, assign, nonatomic) NSDictionary* bannerParameters;
@property(readonly, assign, nonatomic) CGPoint bannerTapLocation;
@property(readonly, assign, nonatomic) CGRect bannerRectOnScreen;
@property(readonly, assign, nonatomic) NSNumber* currentDeviceVolume;
@property(assign, nonatomic) NSObject<OS_dispatch_queue>* dispatchQueue;
@property(retain, nonatomic) NSDictionary* ringtoneData;
@property(assign, nonatomic) BOOL isCoalescingShakeEvents;
@property(readonly, assign) int currentNetworkType;
@property(retain, nonatomic) JSValue* wallpaperRequestListener;
@property(retain, nonatomic) AdSheetJSSetWallpaperRequest* wallpaperRequest;
@property(retain, nonatomic) NSMutableDictionary* bannerParametersDictionary;
@property(assign, nonatomic) unsigned currentSupportedInterfaceOrientations;
+(void)initializeInContext:(id)context;
-(id)description;
-(void)addRingtone:(id)ringtone;
-(void)captureVisibleContentsAsImageURLForListener:(id)listener readableImageData:(BOOL)data;
-(void)_insertImageIntoCache:(id)cache tainted:(BOOL)tainted completion:(id)completion;
-(void)writeDisplayedContentToSavedPhotosAlbum:(id)savedPhotosAlbum;
-(void)writeVideoToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener;
-(void)_finishedSavingVideo:(id)video withError:(id)error context:(void*)context;
-(void)writeImageToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener;
-(void)_previewImage:(id)image data:(id)data named:(id)named previewTitle:(id)title completion:(id)completion;
-(void)image:(id)image didFinishSavingWithError:(id)error contextInfo:(void*)info;
-(void)wallpaperImageViewControllerDidCancel:(id)wallpaperImageViewController;
-(void)wallpaperImageViewControllerDidFinishSaving:(id)wallpaperImageViewController;
-(void)setImageAsWallpaper:(id)wallpaper withTitle:(id)title listener:(id)listener;
-(void)networkTypeChanged:(id)changed;
-(void)registerForVolumeChanges:(id)volumeChanges;
-(void)volumeChanged:(id)changed;
-(BOOL)locationServicesEnabled;
-(void)orientationChanged:(id)changed;
-(void)forwardShakeEventToAd:(id)ad;
-(void)adDidResume;
-(void)adWillPause;
-(void)adWillDismiss;
-(void)reportClickEvent:(id)event;
-(void)dismiss;
-(void)contentDidFinishPreparingToPresent;
-(id)initWithDelegate:(id)delegate impressionController:(id)controller;
-(void)dealloc;
@end
