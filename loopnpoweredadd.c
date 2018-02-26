#include <stdio.h>

int main()
{
	int n,m;
	int sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(m=1;m<=n;m=m+1){
		sum=sum+m**m;
	}
	printf("sum is %d\n",sum);

	return 0;
}
