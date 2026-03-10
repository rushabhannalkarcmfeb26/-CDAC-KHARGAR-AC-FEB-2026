/*
 * Sizeofvariables.c
 *
 *  Created on: 27 Feb 2026
 *      Author: Asus
 */


#include <stdio.h>


int main() {
	short int a;
	int b;
	long int c;
	long long int d;
	float e;
	double f;
	long double g;
	char h;
	unsigned int j;


	printf("Size of short int: %d bytes\n", sizeof(a));
	printf("Size of int: %d bytes\n", sizeof(b));
	printf("Size of long int: %d bytes\n", sizeof(c));
	printf("Size of long long int: %d bytes\n", sizeof(d));
	printf("Size of float: %d bytes\n", sizeof(e));
	printf("Size of double: %d bytes\n", sizeof(f));
	printf("Size of long double: %d bytes\n", sizeof(g));
	printf("Size of char: %d bytes\n", sizeof(h));
	printf("Size of unsigned int: %d bytes\n", sizeof(j));

	return 0;
}

// int,long int, float, unsiigned int have same sizes
// long long int and double have saame sizes
// no unsigned int and int do not have diffferent sizes
