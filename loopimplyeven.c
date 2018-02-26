#include <stdio.h>

int main()
{
	int n,sum=1;
	for(n=2;n<=18;n=n+2){
		sum=sum*n;
	}
	printf("the result is %d\n",sum);
	return 0;
}


