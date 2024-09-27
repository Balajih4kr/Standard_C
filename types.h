#if !defined TYPES_H
#define TYPES_H


typedef int int_t;                    // Signed int (default)
typedef unsigned int ui32_t;           // Unsigned 32-bit integer
typedef signed int si32_t;             // Signed 32-bit integer
typedef char char_t;                   // Character type
typedef unsigned char uchar_t;         // Unsigned char (often used for byte)
typedef signed char schar_t;           // Signed char
typedef short short_t;                 // Short integer (typically 16-bit)
typedef unsigned short ushort_t;       // Unsigned short integer
typedef long long_t;                   // Long integer
typedef unsigned long ulong_t;         // Unsigned long integer
typedef float float_t;                 // Floating-point type (32-bit)
typedef double double_t;               // Double-precision floating-point (64-bit)
typedef enum{                          // In C { 0 => true && 1 => false }
  true,
  false
} bool;


#endif /* TYPES_H */
