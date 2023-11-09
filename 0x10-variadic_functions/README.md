# Variadic functions project:
In this project, we are expected to be able to explain to anyone, without the help of Google:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier
<img src = "https://qph.cf2.quoracdn.net/main-qimg-e411b04ad11b1390dbae4caec08e6381-pjlq" width = "100%" />

## Tasks :
### Mandatory tasks:
### 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0
* File: `0-sum_them_all.c`

### 1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

* Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function
* File: `1-print_numbers.c`

### 
