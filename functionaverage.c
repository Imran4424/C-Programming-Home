#include <stdio.h>

int average(int a,int b,int c)
{
	int temp;
	if(a>b&&a>c&&b>c){
		temp=b;
	}
	else if(a>b&&a>c&&b<c){
		temp=c;
	}
	else if(a>b&&a<c&&c>b){
		temp=a;
	}
	return temp;
}
int main()
{
	int a,b,c,avg;
	scanf("%d%d%d",&a,&b,&c);
	avg=average(a,b,c);
	printf("the average is %d\n",avg);

	return 0;
}
