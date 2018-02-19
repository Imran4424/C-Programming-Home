#include <stdio.h>
#include <math.h>

int main()
{
	int r;
	double area;
	scanf("%d",&r);

	area=3.1416*pow(r,2);

	printf("Area is %lf\n",area);
	return 0;
}
