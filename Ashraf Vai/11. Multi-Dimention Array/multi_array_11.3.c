#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    a[0][0]=4;
    a[0][1]=7;
    a[0][2]=3;
    a[1][0]=8;
    a[1][1]=5;
    a[1][2]=9;
    a[2][0]=1;
    a[2][1]=2;
    a[2][2]=6;

    b[0][0]=1;
    b[0][1]=3;
    b[0][2]=7;
    b[1][0]=8;
    b[1][1]=9;
    b[1][2]=2;
    b[2][0]=4;
    b[2][1]=5;
    b[2][2]=7;

    c[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);

    c[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);

    c[0][2]=(a[0][0]*b[0][2])+(a[0][1]*b[1][2])+(a[0][2]*b[2][2]);

    c[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0])+(a[1][2]*b[2][0]);

    c[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1])+(a[1][2]*b[2][1]);

    c[1][2]=(a[1][0]*b[0][2])+(a[1][1]*b[1][2])+(a[1][2]*b[2][2]);

    c[2][0]=(a[2][0]*b[0][0])+(a[2][1]*b[1][0])+(a[2][2]*b[2][0]);

    c[2][1]=(a[2][0]*b[0][1])+(a[2][1]*b[1][1])+(a[2][2]*b[2][1]);

    c[2][2]=(a[2][0]*b[0][2])+(a[2][1]*b[1][2])+(a[2][2]*b[2][2]);

    printf("\t%d  %d  %d\n\n",c[0][0],c[0][1],c[0][2]);
    printf("\t%d  %d  %d\n\n",c[1][0],c[1][1],c[1][2]);
    printf("\t%d  %d  %d\n\n",c[2][0],c[2][1],c[2][2]);

    return 0;
}