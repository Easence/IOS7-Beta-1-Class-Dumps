/* MFSearchTextParser.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MFSearchTextParseTreeDelegate.h"
#import "MFSearchAlternativesManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MFSearchTextParseTree, MFSearchAlternativesManager, NSMutableDictionary, NSString;
@protocol MFSearchTextParserDelegate;

__attribute__((visibility("hidden")))
@interface MFSearchTextParser : XXUnknownSuperclass <MFSearchTextParseTreeDelegate, MFSearchAlternativesManagerDelegate> {
	NSString* _searchText;
	MFSearchTextParseTree* _searchTextParseTree;
	MFSearchAlternativesManager* _alternativesManager;
	NSMutableDictionary* _tokensByIdentifier;
	id<MFSearchTextParserDelegate> _delegate;
}
@property(assign, nonatomic) id<MFSearchTextParserDelegate> delegate;
-(void)_dumpDiagnosticInformation:(id)information;
-(void)alternativesManager:(id)manager finishedWithIdentifier:(id)identifier;
-(void)alternativesManager:(id)manager foundAlternatives:(id)alternatives forIdentifier:(id)identifier;
-(void)parseTree:(id)tree willRemoveTopLevelToken:(id)token;
-(void)parseTree:(id)tree didAddTopLevelToken:(id)token;
-(void)parseSearchText:(id)text;
-(void)_notifyDelegateSearchCriterionChanged;
-(id)_searchCriterion;
-(id)_alternativesSearchIdentifierForToken:(id)token;
-(id)_tokenForAlternativesSearchIdentifier:(id)alternativesSearchIdentifier;
-(id)_disassociateTokenWithAlternativesSearchIdentifier:(id)alternativesSearchIdentifier;
-(void)_associateToken:(id)token withAlternativesSearchIdentifier:(id)alternativesSearchIdentifier;
-(void)dealloc;
-(id)init;
@end
