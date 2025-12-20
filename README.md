*This project has been created as part of the 42 curriculum by aimalasi*

# ft_printf

> Creation of a custom version of printf version.

## Description
This project is part of the 42 curriculum. The goal is to recode the printf() function from libc.

## Instructions

The funtion needs to:
- Implement the buffer management of the original printf().
- Handle conversions cspdiuxX%
- Use the command ar to create the library. Use of the libtool command is not allowed.
- libftprintf.a has to be created at the root of the repository.
- The header file must be named ft_printf.h and must contain the prototype of the printf() function.

## Resources
- [Introductory article on how the function works](https://medium.com/@abenapomaa/understanding-the-printf-function-in-c-18a2fe2fffa5)
- [Article on variadic functions](www.tutorialspoint.com/c_standard_library/c_macro_va_arg.htm)
- [Video tutorial on how to build a printf function](https://www.youtube.com/watch?v=byRw36Y3Hjs)
- [Video tutorial on format parsing](https://www.youtube.com/watch?v=kM-DOhKR080)
- AI was used to understand the concept of variadic functions, different data types and format parsing

## Algorithm
The function processes the format string character by character, detecting format specifiers and delegating their handling to specialized output functions.
The algorithm traverses the format string once from left to right maintaining:
- An index i for the current position
- A running count of characters printed
- A va_list to access variadic arguments sequentially
The parser operates in two states:
- Normal State: Prints regular characters directly.
- Format Specifier state: Triggered by %, validates and dispatches to appropriate handler.
Core Algorithm Components
- Format Validation: check function
- Dispatcher Pattern: handle_percentage function
- Helper functions: ft_putchar(single character output,casts to unsigned char to prevent sign extention issues with extended ASCII and has consistent behavior across platforms), ft_putstr(String output with NULL safety), ft_putnbr_base(Unified numeric conversion), ft_putadr(Pointer address formatting)

## Data Structure
Use of Variadic Arguments (va_list). This data structure provides sequential access to variable arguments.

## Author
- aimalasi