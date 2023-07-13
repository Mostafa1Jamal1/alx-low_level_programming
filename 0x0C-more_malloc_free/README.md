This is the description of each file in this directory.
any file that is not mentioned here is for testing purposes.
## the main.h and \_putchar.c files are essential for all the directories in this repositry ##
## this is for 0x0C.C-More malloc, free project ##
Let us start:

main.h > is a header file that contains all the prototypes of the functions created.

0-malloc_checked.c > is a source code file of a function that allocates memory using malloc.
- Prototype: void *malloc_checked(unsigned int b);
- Returns a pointer to the allocated memory
- if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

1-string_nconcat.c > is a source code file of a function that concatenates two strings.
- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
- The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
- If the function fails, it should return NULL
- If n is greater or equal to the length of s2 then use the entire string s2
- if NULL is passed, treat it as an empty string

2-calloc.c > is a source code file of a function that allocates memory for an array, using malloc.
- Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
- The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- If nmemb or size is 0, then _calloc returns NULL
- If malloc fails, then _calloc returns NULL
