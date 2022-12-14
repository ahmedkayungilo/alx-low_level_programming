#include<stdio.h>

/**
 * main - Print size of data types in bytes
 *
 * Description: This program prints the sizes of the different
 * data sturctures on a particular machine.
 * Return: Always return 0
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

