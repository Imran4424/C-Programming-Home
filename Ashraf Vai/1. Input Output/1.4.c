/*
	Write a program that read and display floating point number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	float num;

	scanf("%f", &num);

	printf("%f\n", num);

	printf("%.1f\n", num);
	printf("%.2f\n", num);
	printf("%.3f\n", num);
	printf("%.4f\n", num);

	return 0;
}

/*
	here %f is the format specifier of float number
*/