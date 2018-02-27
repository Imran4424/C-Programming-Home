#include <stdio.h>

int main()
{
	int a,b,c,d,e,f,n;
	scanf("%d",&n);
	printf("\n\n");
	for(a=1;a<=n;a++){
		for(c=1;c<=n-a;c++){
			printf(" ");
		}
		for(b=1;b<=a;b++){
		printf("%d",b);
		}
		for(d=a-1;d>=1;d--){
			printf("%d",d);
		}
		printf("\n");

	}
	for(a=1;a<=n;a++){
		for(c=1;c<=a;c++){
			printf(" ");
		}
		for(b=1;b<=n-a;b++){
			printf("%d",b);
		}
		for(d=n-a-1;d>=1;d=d--){
			printf("%d",d);
		}
		printf("\n");
	}

	return 0;

}
