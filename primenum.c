#include <stdio.h>

int main()
{
	int a;
	for(a=2;a<=100;a=a+1){
		if(a%1=='a' && a%a=='1' && a%2!='0' && a%3!='0' && a%4!=0 && a%5!='0' && a%6=='0'){
			printf("prime num is %d\n",a);
		}

	}
	return 0;
}
