/* Core types and literals */

#ifndef CORE_H
#define CORE_H

/* ----- LITERALS ----- */

#define TRUE                1
#define FALSE               0
#define NIL                 0

/* ----- SIGNED INTEGERS ----- */

typedef char                I8;
typedef int                 I16;
typedef long                I32;
typedef long long           I64;

/* ----- UNSIGNED INTEGERS ------ */

typedef unsigned char       U8;
typedef unsigned int        U16;
typedef unsigned long       U32;
typedef unsigned long long  U64;

/* ----- FLOATING POINT ----- */

typedef float               F32;
typedef double              F64;

/* ----- OTHER TYPES ----- */

typedef int                 Bool;
typedef char                Ch;
typedef void                Void;

#endif
