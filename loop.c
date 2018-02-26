#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	for(n=1;n<=20;n=n+1){
		sum=sum+n*n;
	}
	printf("sum is %d\n",sum);

	return 0;
}

