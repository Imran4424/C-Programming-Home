#include <stdio.h>

int main()
{
    int i,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;

    char str[100];
    gets(str);
    puts(str);
    for(i=0;i<100;i++){
        if(str[0]==str[i]){
            sum=sum+1;
        }
        if(str[1]==str[i]){
            sum1=sum1+1;
        }
        if(str[2]==str[i]){
            sum2=sum2+1;
        }
        if(str[3]==str[i]){
            sum3=sum3+1;
        }
        if(str[4]==str[i]){
            sum4=sum4+1;
        }
        if(str[6]==str[i]){
            sum5=sum5+1;
        }
        if(str[7]==str[i]){
            sum6=sum6+1;
        }
        if(str[8]==str[i]){
            sum7=sum7+1;
        }
        if(str[9]==str[i]){
            sum8=sum8+1;
        }

    }
    printf("%c: %d\n",str[0],sum-1);
    printf("%c: %d\n",str[1],sum1);
    printf("%c: %d\n",str[2],sum2);
    printf("%c: %d\n",str[3],sum3);
    printf("%c: %d\n",str[4],sum4);
    printf("%c: %d\n",str[6],sum5);
    printf("%c: %d\n",str[7],sum6);
    printf("%c: %d\n",str[8],sum7);
    printf("%c: %d\n",str[9],sum8);

    return 0;
}
