#include <stdio.h>

/**
 * main - Entry point
 *Write a C program that prints the size of various types on the computer it is compiled and run on. 
 *You should produce the exact same output as in the example
 *Warnings are allowed
 *Your program should return 0
 *You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of long int: %lu byte(s)\n", sizeof(long int));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
printf("Size of float: %lu byte(s)\n", sizeof(float));
return (0);
}
