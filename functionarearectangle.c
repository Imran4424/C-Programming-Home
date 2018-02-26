#include <stdio.h>

 int rectangle(int l,int w)
 {
	int a;
	a=l*w;

	return a;
 }
 int main()
 {
	int l,w,area=0;
	scanf("%d%d",&l,&w);

	area=rectangle(l,w);
	printf("the area is %d\n",area);
	return 0;
 }

