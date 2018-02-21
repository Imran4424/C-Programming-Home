#include <stdio.h>

int main()
{
    int n,c,sum = 1,i,x;

    scanf("%d %d",&n,&c);





    for(i = n;i>n-c;i--)
    {
        sum *= (i);
    }

    for(x=c;x>1;x--)
    {
        sum /= x;
    }

    printf("%d\n",sum);

    return 0;
}
