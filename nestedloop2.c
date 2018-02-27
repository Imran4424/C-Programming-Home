#include <stdio.h>

int main()
{
	int a,b,sum=0;
	for(a=1;a<=5;a=a++){
		for(b=1;b<=a+1;b=b+1){
			a=a*b;
		}
		sum=sum+a*a;
	}
	printf("result is %d\n",sum);
	return 0;
}


