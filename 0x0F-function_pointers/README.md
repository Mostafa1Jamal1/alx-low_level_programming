This is for the description of each file in this directory `0x0F-function_pointers`.
any file that is not mentioned here is for testing purposes.

Let us start:

`function_pointers.h` > is a header file for functions in this directory.

`0-print_name.c` > is a source code file for a function that prints a name.
- Prototype: void print_name(char *name, void (*f)(char *));

`1-array_iterator.c` > is a source code file for a function that executes a function given as a parameter on each element of an array.
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use.

`2-int_index.c` > is a source code file for a function that searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- where size is the number of elements in the array `array`
- `cmp` is a pointer to the function to be used to compare values
- `int_index` returns the index of the first element for which the cmp function does not return `0`
- If no element matches, return `-1`
- If `size <= 0`, return `-1`.
