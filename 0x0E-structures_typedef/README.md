# Structures and typedef project:
In this project we will learn : 
* What are structures, when, why and how to use them
* How to use `typedef`

## Tasks : 
### Mandatory Tasks
### 0. Poppy :
Define a new type struct dog with the following elements:

* name, type = char *
* age, type = float
* owner, type = char *
* File: `dog.h`

### 1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
* File: `1-init_dog.c`

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

* Prototype: void print_dog(struct dog *d);
* Format: see example bellow
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.
* File: `2-print_dog.c`

### 
