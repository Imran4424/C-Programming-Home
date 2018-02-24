#include <stdio.h>

int main()
{
	double c,f;
	scanf("%lf",&f);

	c=(f-32)/1.8;
	printf("fahrenheit is %.2lf\n",c);

	return 0;
}
