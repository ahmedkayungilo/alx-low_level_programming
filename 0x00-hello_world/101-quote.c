#include<stdio.h>
#include<unistd.h>

/**
 * main - Prints a specified quote
 *
 * Description: This program prints the quote
 * "and that piece of art is useful" - Dora Kopar, 2015-10-19
 * followed by a new line
 * Return: Always returns 1
 */

int main(void)
{
	write(1, "and that piece of art its useful\" - Dora Kopar, 2015-10-19\n", 59);
	return (1);
}

