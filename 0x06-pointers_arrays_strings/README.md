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

3-strcmp.c > is a source code of a function that compares two strings.
- Prototype: int _strcmp(char *s1, char *s2);
- Your function should work exactly like strcmp

4-rev_array.c > is a source code of a function that reverses the content of an array of integers.
- Prototype: void reverse_array(int *a, int n);
- Where n is the number of elements of the array

5-string_toupper.c > is a source code of a function that changes all lowercase letters of a string to uppercase.
- Prototype: char *string_toupper(char *);

6-cap_string.c > is a source code of a function that capitalizes all words of a string.
- Prototype: char *cap_string(char *);
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-leet.c > is a source code of a function that encodes a string into 1337.
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char *leet(char *);
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation

100-rot13.c > is a source code of a function that encodes a string using rot13.
- Prototype: char *rot13(char *);
- You can only use if statement once in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation

101-print_number.c > is a source code file of a function that prints an integer.
- Prototype: void print_number(int n);
- You can only use _putchar function to print
- You are not allowed to use long
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values

102-magic.c > is is a source code of a program that demostrate how we can manipulate data in memory with pointers and addresses in a indirect way.
