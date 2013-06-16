/* Maps-Structs.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	double x;
	double y;
} XXStruct_gLbvpC;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	struct {
		unsigned _field1 : 1;
		unsigned _field2 : 1;
		unsigned _field3 : 1;
	} _field4;
} XXStruct_DtYHXC;

typedef struct _GEOTileKey {
	unsigned _field1 : 6;
	unsigned _field2 : 26;
	unsigned _field3 : 26;
	unsigned _field4 : 6;
	unsigned _field5 : 8;
	unsigned _field6 : 8;
	unsigned _field7 : 8;
	unsigned _field8 : 1;
	unsigned _field9 : 7;
	unsigned char _field10[4];
} GEOTileKey;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	unsigned long long _high;
	unsigned long long _low;
} XXStruct_t9EeIA;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	XXStruct_gLbvpC origin;
	XXStruct_gLbvpC size;
} XXStruct_Yvvv9D;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned _field1;
	float _field2;
} XXStruct_lRyTTC;

typedef struct {
	int transport;
	int context;
	double distance;
	BOOL useMetric;
	BOOL useYardsForShortDistances;
	BOOL usePrimaryName;
	BOOL useSecondaryName;
	BOOL useDistanceForSecondary;
	BOOL useContinueForSecondary;
	int numPrimarySigns;
	int numSecondarySigns;
} XXStruct_3c2M5A;

typedef struct CATransform3D {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	float _field10;
	float _field11;
	float _field12;
	float _field13;
	float _field14;
	float _field15;
	float _field16;
} CATransform3D;

typedef struct {
	struct {
		id _field1;
		char* _field2;
		unsigned _field3;
		unsigned _field4;
		unsigned _field5;
		unsigned _field6;
		unsigned _field7;
		unsigned long long _field8;
		BOOL _field9;
		unsigned long long _field10;
		float _field11;
		id _field12;
		int _field13;
	} _field1;
	unsigned _field2;
	unsigned _field3;
	int _field4;
	int _field5;
	int _field6;
	unsigned _field7;
	unsigned _field8;
	UIEdgeInsets _field9;
	CGPoint* _field10;
	struct {
		unsigned short _field1[2];
		unsigned short _field2[2];
	} _field11;
	unsigned char _field12;
} XXStruct_4i9X_D;

typedef struct {
	int _field1;
	int _field2;
	struct {
		unsigned requirementsMask : 1;
		unsigned version : 1;
	} _field3;
} XXStruct_hSSemD;

typedef struct SBSThermalWarningAssertion* SBSThermalWarningAssertionRef;

typedef struct {
	double _field1;
	double _field2;
	double _field3;
} XXStruct_qJTILA;

typedef struct sqlite3 sqlite3;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct {
	CGSize referenceSize;
	float arrowStemWidth;
	float intersectionStemWidth;
	float intersectionStrokeWidth;
	CGSize arrowHeadSize;
	float arrowStemCornerRadius;
	float arbitraryCurveRadius;
	float uTurnRadius;
	int arrowStyle;
	float rightTurnCurveRadius;
	float rightTurnInnerCurveRadius;
	float rightTurnStemLengthBeforeTurn;
	float rightTurnStemLengthAfterTurn;
	float fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
	float fortyFiveDegreeSouthAngleStemLengthAfterTurn;
	float fortyFiveDegreeSouthAngleCornerRadius;
	float fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
	float fortyFiveDegreeNorthAngleStemLengthAfterTurn;
	float fortyFiveDegreeNorthAngleCornerRadius;
	float exitStemLengthBeforeTurn;
	float exitStemLengthAfterTurn;
	float exitRoadNotTakenStemLength;
	float arrivalOuterCircleWidth;
	float arrivalGapBetweenCircles;
	float arrivalGapBetweenArrowAndCircles;
	BOOL arrivalCutOutArrowInInnerCircle;
	float mergeRightStemLengthBeforeTurn;
	float mergeRightStemLengthAfterTurn;
	float mergeRightCornerRadius;
	BOOL junctionsDrawEntryExitRightAngles;
	BOOL junctionsDrawEntryExitFortyFiveDegreeAngles;
} XXStruct_psi9$D;

typedef struct {
	unsigned userInteractionEnabled : 1;
	unsigned canZoom : 1;
	unsigned canScroll : 1;
	unsigned canRotate : 1;
	unsigned canTilt : 1;
} XXStruct_RoJaGA;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct {
	id _field1;
	unsigned _field2;
} XXStruct_HeigOC;

typedef struct {
	unsigned _field1;
	BOOL _field2;
} XXStruct_gANOuD;

typedef struct CGImage* CGImageRef;
