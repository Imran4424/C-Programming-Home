#include <stdio.h>
int main()
{
    int x;
    printf("please enter the value of x\n");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("x is even\n");
    }
    else
    {
        printf("x is odd\n");
    }
    return 0;
}

