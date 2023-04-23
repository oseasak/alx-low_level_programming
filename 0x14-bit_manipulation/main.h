#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 *
 * This file containing prototypes for functions
 *       written in 0x13-bit_manipulation directory.
 */

int _putchar(char c);
unsigned int binary_to_unt(const char *y);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
