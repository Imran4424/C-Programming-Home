#include <stdio.h>

int main()
{
	int a;
	int n,sum=0;
	for(n=0;n<=39;n=n+1){
		printf("enter the %d-th numbers\n",n);
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("\nthe result is %d\n",sum);

	return 0;
}
