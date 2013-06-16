/* MobileMail-Structs.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
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

typedef struct __DDResult* DDResultRef;

typedef struct __DDScanQuery* DDScanQueryRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	BOOL _field4;
	float _field5;
	int _field6;
} XXStruct_3uUjXA;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __DDScanner* DDScannerRef;

typedef struct __CFSet* CFSetRef;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

typedef struct CGGradient* CGGradientRef;

typedef struct MessageFoldPinch {
	float centroidY;
	float distanceY;
} MessageFoldPinch;

typedef struct CGContext* CGContextRef;

typedef struct __SecCertificate SecCertificate;
