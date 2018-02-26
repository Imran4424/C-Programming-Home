#include <stdio.h>

int main()
{
	int a,start,end,diff,sum=0;
	scanf("%d%d%d",&start,&end,&diff);
	for(a=start;a<=end;a=a+diff){
		sum=sum+a;
	}
	printf("result is %d\n",sum);

	return 0;
}
