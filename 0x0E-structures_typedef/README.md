This is for the description of each file in this directory `0x0E-structures_typedef`.
any file that is not mentioned here is for testing purposes.

Let us start:

`dog.h` > is a header file that defines a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *

`1-init_dog.c` > is a source code of a function that initialize a variable of type struct dog
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
