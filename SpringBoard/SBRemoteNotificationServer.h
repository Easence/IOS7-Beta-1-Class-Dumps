/* SBRemoteNotificationServer.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "APSConnectionDelegate.h"

@class NSString, NSObject, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationServer : XXUnknownSuperclass <APSConnectionDelegate> {
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	NSString* _lastNotificationReceivedBundleIdentifier;
	NSObject<OS_dispatch_queue>* _topicsQueue;
	NSMutableDictionary* _appImportanceTracker;
}
+(id)sharedInstance;
-(id)_allPushRegisteredThirdPartyBundleIDs;
-(void)clearMessageUserInfoForToken:(int)token forBundleIdentifier:(id)bundleIdentifier;
-(id)getMessageUserInfoForToken:(int)token forBundleIdentifier:(id)bundleIdentifier;
-(id)getMessageUserInfoForBundleIdentifier:(id)bundleIdentifier;
-(void)setMessageUserInfo:(id)info forToken:(int)token forBundleIdentifier:(id)bundleIdentifier;
-(void)setMessageUserInfo:(id)info forBundleIdentifier:(id)bundleIdentifier;
-(void)postSettingsChangedNotificationForBundleIdentifier:(id)bundleIdentifier;
-(void)setSettingsTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
-(unsigned)settingsEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(unsigned)appEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(void)notePermissionAlertAcceptedTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
-(BOOL)hasRegisteredBundleIdentifiers;
-(void)setSystemwideEnabled:(BOOL)enabled;
-(BOOL)isSystemwideEnabled;
-(unsigned)getEffectiveEnabledTypesForApplication:(id)application;
-(void)unregisterApplication:(id)application;
-(void)registerApplication:(id)application forEnvironment:(id)environment withTypes:(unsigned)types;
-(id)_allTopicsForApplication:(id)application;
-(id)_cloudDatabaseTopicsForApplication:(id)application;
-(void)calculateTopics;
-(void)_appDebugStateDidChange:(id)_appDebugState;
-(void)_appStateDidChange:(id)_appState;
-(void)_topicsQueue_appImportanceDecreased:(id)decreased;
-(void)_topicsQueue_appImportanceIncreased:(id)increased;
-(void)_topicsQueue_moveTopicsForApp:(id)app fromList:(unsigned)list toList:(unsigned)list3;
-(id)allSettingsEnabledTypeValues;
-(id)allAppEnabledTypeValues;
-(id)lastNotificationReceivedBundleIdentifier;
-(void)connection:(id)connection didReceiveIncomingMessage:(id)message;
-(void)noteApplicationFinishedLaunching:(id)launching;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
-(void)run;
-(void)dealloc;
-(id)init;
@end