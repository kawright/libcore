/* Core types and literals */

#ifndef CORE_H
#define CORE_H


/* ----- LITERALS ----- */


/* Boolean true literal */
#define TRUE                1

/* Boolean false literal */
#define FALSE               0

/* Literal for null pointers. Equivalent to C standard 'NULL'. */
#define NIL                 0


/* ----- SIGNED INTEGERS ----- */


/* Signed 8-bit integer value. */
typedef char                I8;

/* Signed 16-bit integer value. */
typedef int                 I16;

/* Signed 32-bit integer value. */
typedef long                I32;

/* Signed 64-bit integer value. */
typedef long long           I64;


/* ----- UNSIGNED INTEGERS ------ */


/* Unsigned 8-bit value. */
typedef unsigned char       U8;

/* Unsigned 16-bit value. */
typedef unsigned int        U16;

/* Unsigned 32-bit value. */
typedef unsigned long       U32;

/* Unsigned 64-bit value. */
typedef unsigned long long  U64;


/* ----- FLOATING POINT ----- */


/* 32-bit floating-point value. */
typedef float               F32;

/* 64-bit floating-point value. */
typedef double              F64;


/* ----- OTHER TYPES ----- */


/* Boolean type. */
typedef int                 Bool;

/* Textual character type. */
typedef char                Ch;

/* Void type. Equivalent to C standard 'void'. */
typedef void                Void;


#endif
