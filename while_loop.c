#include <stdio.h>
int main()
{
    int y;
    y = 1;
    while(y <= 100)
    {
        if(y%2 == 0)
        {
            printf("%d\n",y);
        }
        y=y+1;
    }
    return 0;
}
