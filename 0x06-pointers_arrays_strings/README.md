This is for the description of each file in this directory.
any file that is not mentioned here is for testing purposes.
##the main.h and \_putchar.c files are essential for all the directories in this repositry
###sorry for not saying that earlier.
Let us start:

0-strcat.c > is a source code of a function that concatenates two strings.
- Prototype: char *_strcat(char *dest, char *src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

1-strncat.c > is a source code of a function that concatenates two strings.
- Prototype: char *_strncat(char *dest, char *src, int n);
- The _strncat function is similar to the _strcat function, except that
-- it will use at most n bytes from src; and
-- src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

2-strncpy.c > is a source code of a function that copies a string.
- Prototype: char *_strncpy(char *dest, char *src, int n);
- Your function should work exactly like strncpy ( a similar function in The standard library)
