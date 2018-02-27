#include <stdio.h>

int main()
{
    int i=4,j;
    j=++i*i++;

    i*=j;

    printf("%d %d \n",i,j);
    return 0;
}
