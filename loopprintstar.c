#include <stdio.h>

int main()
{
	int a,b;
	for(a=0;a<5;a=a+1){
		for(b=0;b<a+1;b=b+1){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
