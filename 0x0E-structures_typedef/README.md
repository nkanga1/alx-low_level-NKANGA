
0x0E. C - Structures, typedef
tasks. 0	Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

tasks. 1	Write a function that initialize a variable of type struct dog.

tasks. 2	Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

tasks. 3	Define a new type dog_t as a new name for the type struct dog.

tasks. 4	Write a function that creates a new dog.

tasks. 5	Write a function that frees dogs.


File dog.h is a header file containing a new type "struct dog".

File 1-init_dog.c a function that initialize a variable of type struct dog.

File 2-print_dog.c is a function that prints a struct dog.

File 4-new_dog.c is a function that creates a new dog.

File 5-free_dog.c is a function that frees dogs.
