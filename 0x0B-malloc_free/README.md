This is a description of every file in this directory
these files are tasks of the 0x0B.C-malloc, free project
In the ALX SE program

0-create_array.c > is a source code for a function that creates an array of chars, and initializes it with a specific char.
- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

1-strdup.c > is a source code for a function that  returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available