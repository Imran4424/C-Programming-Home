#include <stdio.h>
#include <math.h>

void roots(int a,int b,int c)
{
    double x1,x2;

    x1=(-b+sqrt( pow(b,2)-4*a*c) )/2*a;

    x2=(-b-sqrt( pow(b,2)-4*a*c) )/2*a;

    printf("\n%.3lf \n%.3lf\n",x1,x2);
}

int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    roots(x,y,z);
    return 0;
}
