#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
<<<<<<< HEAD
int _putchar(char c);
void print_binary(unsigned long int n);
=======
void print_binary(unsigned long int n);
int _putchar(char c);
>>>>>>> 2c61d3b4416f23a01053da3f9e0aa869ac1242a4
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
<<<<<<< HEAD
int get_endianness(void);
int _atoi(const char *s);
=======
int _atoi(const char *s);
int get_endianness(void);
>>>>>>> 2c61d3b4416f23a01053da3f9e0aa869ac1242a4

#endif
