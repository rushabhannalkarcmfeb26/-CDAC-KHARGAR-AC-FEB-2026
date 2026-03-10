//============================================================================
// Name        : Temperature.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//===========================================================================

#include <stdio.h>
#include <stdlib.h>


float celsiusToFahrenheit(float celsius) {
	return (celsius * 9.0 / 5.0) + 32.0;
}
float fahrenheitToCelsius(float fahrenheit) {
	return (fahrenheit - 32.0) * 5.0 / 9.0;
}



int main() {
	float celsius, fahrenheit;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsiusToFahrenheit(celsius);
	printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = fahrenheitToCelsius(fahrenheit);
	printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

	return 0;
}



