# Malloc and free project :

## Tasks:
### 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

* Prototype: `char *create_array(unsigned int size, char c)`;
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails
* File: `0-create_array.c`
  
### 1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: `char *_strdup(char *str)`;
* The `_strdup()` function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the `_strdup` function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
