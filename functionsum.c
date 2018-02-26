#include <stdio.h>

int add(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("the sum is %d\n",sum);
	return 0;
}
