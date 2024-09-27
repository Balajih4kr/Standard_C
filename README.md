# Standard_C
How to write GNU standards and Linux kernal level code in c

<h3 align="center">This Repo teach's about, how to write code like Linus tordvals and International standard c code : </h3>
FOLLOW THIS PDF : 
<a href=https://www.gnu.org/prep/standards/standards.pdf>GNU STANDARD.PDF</a>

# Custom Data Types Header

This project provides a header file, `types.h`, that defines a set of custom data types using the `typedef` feature in C. This allows for improved readability and maintainability in C programming by creating more meaningful names for standard data types.

## Contents

- `types.h`: A header file containing `typedef` definitions for various data types.

## Data Types Defined

The following data types are defined in the `types.h` file:

- **int_t**: Alias for `int` (signed integer).
- **ui32_t**: Alias for `unsigned int` (32-bit unsigned integer).
- **si32_t**: Alias for `signed int` (signed 32-bit integer).
- **char_t**: Alias for `char` (character type).
- **uchar_t**: Alias for `unsigned char` (unsigned character type, often used for byte manipulation).
- **schar_t**: Alias for `signed char` (signed character type).
- **short_t**: Alias for `short` (typically 16-bit signed integer).
- **ushort_t**: Alias for `unsigned short` (unsigned short integer).
- **long_t**: Alias for `long` (long integer).
- **ulong_t**: Alias for `unsigned long` (unsigned long integer).
- **float_t**: Alias for `float` (single-precision floating-point).
- **double_t**: Alias for `double` (double-precision floating-point).

## Usage

To use the custom data types in your C program, include the `types.h` header file at the beginning of your source files. For example:

```c
#include "types.h"

int main() {
    int_t a = 10;
    ui32_t b = 20;
    float_t pi = 3.14f;
    
    // Your code here

    return 0;
}

    




