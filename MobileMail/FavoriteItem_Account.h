/* FavoriteItem_Account.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FavoriteItem.h"

@class MailAccount;

__attribute__((visibility("hidden")))
@interface FavoriteItem_Account : FavoriteItem {
	MailAccount* _account;
}
-(void)wasSelected:(id)selected accessoryTapped:(BOOL)tapped;
-(id)representingMailbox;
-(id)account;
-(void)configureCell:(id)cell;
-(BOOL)isVisible;
-(id)displayName;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)dictionary;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initWithAccount:(id)account;
@end
