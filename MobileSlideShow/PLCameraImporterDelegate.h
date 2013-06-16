/* PLCameraImporterDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PLCameraImporterDelegate <NSObject>
-(void)importer:(id)importer didCompleteRemovalOfItems:(id)items;
-(void)importer:(id)importer didCompleteImportForItems:(id)items;
-(void)importer:(id)importer didImportItem:(id)item error:(id)error;
-(void)importer:(id)importer didCopyOriginalForItem:(id)item error:(id)error;
-(void)importer:(id)importer didChangeImportItem:(id)item changeType:(int)type error:(id)error;
-(void)importerDidFinishReadingImportItems:(id)importer error:(id)error;
-(void)importer:(id)importer didRemoveImportItems:(id)items atIndexes:(id)indexes;
-(void)importer:(id)importer didAddImportItem:(id)item atIndex:(unsigned)index;
@end
