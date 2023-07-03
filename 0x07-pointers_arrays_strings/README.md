This is a description of every file in this directory
these files are tasks of the 0x07.C-Even more pointers, arrays and strings project
In the ALX SE program

_putchar > is a source code for a function that writes the character c to stdout.

main.h > is the header file for all the functions in this directory.

0-memset.c > is a source code for a function that fills memory with a constant byte.
- Prototype: char *_memset(char *s, char b, unsigned int n);
- The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s

1-memcpy.c  > is a source code for a function that copies memory area.
- Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
- The _memcpy() function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest

2-strchr.c > is a source code for a function that locates a character in a string.
- Prototype: char *_strchr(char *s, char c);
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3-strspn.c > is a source code for a function that gets the length of a prefix substring.
- Prototype: unsigned int _strspn(char *s, char *accept);
- Returns the number of bytes in the initial segment of s which consist only of bytes from accept
