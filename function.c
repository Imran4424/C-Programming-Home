#include <stdio.h>

int minimum(int a,int b)
{
	int temp;
	if(a<b){
		temp=a;
	}
	else{
		temp=b;
	}
	return temp;
}
int main()
{
	int a,b,c,price,smaller=0;
	scanf("%d%d%d",&a,&b,&c);
	smaller=minimum(a,b);
	price=minimum(c,smaller);
	printf("the smaller is %d\n",price);
	return 0;
}
