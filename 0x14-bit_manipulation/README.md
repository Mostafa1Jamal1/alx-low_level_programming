This is for the description of each file in this directory `0x14-bit_manipulation`.
any file that is not mentioned here is for testing purposes.

Let us start:

`0-binary_to_uint.c` > is a source code file for a function that converts a binary number to an unsigned int.
- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converted number, or 0 if
    - there is one or more chars in the string `b` that is not `0` or `1`
    - `b` is `NULL`
