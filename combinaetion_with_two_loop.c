#include <stdio.h>

int main()
{
    int num_of_objects,choice,n,c,sum = 1,i,x;

    scanf("%d %d",&num_of_objects,&choice);

    if(num_of_objects > choice)
    {
        n = num_of_objects;
        c = choice;
    }
    else
    {
        n = choice;
        c = num_of_objects;
    }



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
