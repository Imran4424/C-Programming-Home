/*
	Write a program that read and display floating point number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	float num;

	scanf("%f", &num);

	printf("%f\n", num); //default

	printf("%.1f\n", num); // 1 precision

	printf("%.2f\n", num); // 2 precision
	printf("%.3f\n", num);
	printf("%.4f\n", num);

	return 0;
}

/*
	here %f is the format specifier of float number

	by default printf print the float number with 6 precision floating point number.


*/