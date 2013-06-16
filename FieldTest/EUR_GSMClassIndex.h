/* EUR_GSMClassIndex.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ClassIndex.h"

@class PDPContextList, CellChangeCounters, CodingScheme, EquivalentPLMNList, ProcessCO, ProcessCS, ProcessPS, ServingPLMN, SimInfo, ActiveSet, DetectedSet, GSMSet, MobileAllocation, BLER, MonitoredSet, NonRankedGSMSet, NonRankedUMTSSet, UMTSSet, VirtualActiveSet, UMTSRRInfo, UMTSRRMeasurement, GSMServingCell, NeighboringCells, GPRSInformation, GSMRRInfo;

__attribute__((visibility("hidden")))
@interface EUR_GSMClassIndex : ClassIndex {
@private
	ActiveSet* objActiveSet;
@protected
	CodingScheme* objCodingScheme;
	GPRSInformation* objGPRSInformation;
	GSMServingCell* objGSMServingCell;
	MobileAllocation* objMobileAllocation;
@private
	NeighboringCells* objNeighboringCells;
@protected
	PDPContextList* objPDPContextList;
	ProcessPS* objProcessPS;
	UMTSRRMeasurement* objUMTSRRMeasurement;
	CellChangeCounters* objCellChangeCounter;
@private
	DetectedSet* objDetectedSet;
@protected
	GSMSet* objGSMSet;
	NonRankedGSMSet* objNonRankedGSMSet;
	ProcessCO* objProcessCO;
	ServingPLMN* objServingPLMN;
@private
	UMTSSet* objUMTSSet;
@protected
	EquivalentPLMNList* objEquivalentPLMNList;
	GSMRRInfo* objGSMRRInfo;
	MonitoredSet* objMonitoredSet;
	NonRankedUMTSSet* objNonRankedUMTSSet;
@private
	ProcessCS* objProcessCS;
@protected
	UMTSRRInfo* objUMTSRRInfo;
	BLER* objBLER;
	VirtualActiveSet* objVirtualActiveSet;
	SimInfo* objSimInfo;
}
-(void)dealloc;
-(id)init;
@end