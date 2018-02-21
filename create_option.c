#include <stdio.h>

int main()
{
    int n;
    float a,b,c;
    scanf("%f%f",&a,&b);
    printf("input 1 to add\n");
    printf("input 2 to substract\n");
    printf("input 3 to imply\n");
    printf("input 4 to divide\n");
    scanf("%d",&n);

    if(n==1){
        c=a+b;
    }
    if(n==2){
        c=a-b;
    }
    if(n==3){
        c=a*b;
    }
    if(n==4){
        c=a/b;
    }

    printf("result is %.3f\n",c);

    return 0;
}
