#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,sum=0;
	for(a=1,b=3,c=5;a<=25,b<=27,c<=29;a=a+4,b=b+4,c=c+4){
		sum=sum+pow(a,1)*pow(b,2)*pow(c,3);

	   }
	printf("%d\n",sum);
	return 0;
}

