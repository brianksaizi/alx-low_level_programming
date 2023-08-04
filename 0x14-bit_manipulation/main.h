#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/* Print a single character to stdout.
 * @c: The character to be printed.
 *
 * Return: On success, the character printed, otherwise EOF.
 */
int _putchar(char c);

/* Convert a binary number to an unsigned int.
 * @b: String of bits.
 *
 * Return: (unsigned int)
 */
unsigned int binary_to_uint(const char *b);

/* Compute the exponential of a number.
 * @a: The base value.
 * @b: The power value.
 *
 * Return: (unsigned int)
 */
unsigned int _pow(unsigned int a, unsigned int b);

/* Get the length of a string.
 * @s: The string to return the length.
 *
 * Return: Length of s.
 */
int _strlen(const char *s);

/* Print the binary representation of an unsigned long int.
 * @n: The number to print in binary format.
 */
void print_binary(unsigned long int n);

/* Get the value of a bit at a given index in an unsigned long int.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the specified index (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index);

/* Set the value of a bit at a given index in an unsigned long int.
 * @n: A pointer to the number whose bit needs to be set.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);

/* Clear the value of a bit at a given index in an unsigned long int.
 * @n: A pointer to the number whose bit needs to be cleared.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Calculate the number of bits to flip to convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Convert an unsigned long int to its binary representation.
 * @n: The number to convert.
 *
 * Return: A pointer to a binary string representation of n.
 */
char *to_binary(unsigned long int n);

/* Check the endianness of the current system.
 *
 * Return: 0 if big-endian, 1 if little-endian.
 */
int get_endianness(void);

#endif /* _MAIN_H_ */
