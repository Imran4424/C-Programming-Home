#include<stdio.h>

int main() {
    int n,m,i,j,sum,t;
    scanf("%d%d",&n,&m);
    sum=0;
    for(i=1;i<=n;i++) {
    	t=1;
    	for(j=1;j<=i;j++)
    		t=((long long)t*i)%m;
    	sum=(sum+t)%m;
    }
    printf("%d\n",sum);

}
