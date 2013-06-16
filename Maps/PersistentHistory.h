/* PersistentHistory.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PersistentHistory : XXUnknownSuperclass {
	NSMutableArray* _items;
}
@property(retain, nonatomic) NSMutableArray* items;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)itemsAtIndex:(unsigned)index;
-(unsigned)itemsCount;
-(void)addItems:(id)items;
-(void)clearItems;
-(void)dealloc;
@end