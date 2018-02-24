#include <stdio.h>
double factorial(int n)
{
	int a,sum=1;
	for(a=n;a>=1;a--){

		sum=sum*a;
	}
	return sum;
}
int main()
{
	int n;
	double factor=0.0;
	scanf("%d",&n);
	factor=factorial(n);
	printf("factorial is %.2lf\n",factor);

	return 0;

}
