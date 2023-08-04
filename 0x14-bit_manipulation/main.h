#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/* Function prototype to print a character */
int _putchar(char c);

/* Convert a binary number to an unsigned int. */
unsigned int binary_to_uint(const char *b);

/* Compute the exponential of a number. */
unsigned int _pow(unsigned int a, unsigned int b);

/* Get the length of a string. */
int _strlen(const char *s);

/* Print the binary representation of an unsigned long int. */
void print_binary(unsigned long int n);

/* Get the value of a bit at a given index. */
int get_bit(unsigned long int n, unsigned int index);

/* Set a bit at a given index to 1. */
int set_bit(unsigned long int *n, unsigned int index);

/* Set a bit at a given index to 0. */
int clear_bit(unsigned long int *n, unsigned int index);

/* Calculate the number of bits needed to flip to get from n to m. */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Convert an unsigned long int to its binary representation as a string. */
char *to_binary(unsigned long int n);

/* Check the endianness of the machine. */
int get_endianness(void);

#endif /* _MAIN_H_ */
