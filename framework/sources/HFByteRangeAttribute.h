#import <Foundation/NSString.h>

/* Attributes used to illustrate diffs. */
extern NSString * const kHFAttributeDiffInsertion;

/* Attributes used for address spaces of other processes. */
extern NSString * const kHFAttributeUnmapped;   /* A range that is not allocated, used to describe sparse data sets (e.g. a virtual address space). */
extern NSString * const kHFAttributeUnreadable; /* A range that is allocated but is not readable. */
extern NSString * const kHFAttributeWritable;   /* A range that is writable. */
extern NSString * const kHFAttributeExecutable; /* A range that is executable. */
extern NSString * const kHFAttributeShared;     /* A range that is shared memory. */

extern NSString * const kHFAttributeMagic; /* For testing. */