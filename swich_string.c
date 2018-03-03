#include <stdio.h>

int main()
{
    int i,n;
    char str[30];
    gets(str);
    n=strlen(str);
    printf("\n\n");
    for(i=0;i<n;i++){

        switch(str[i]){

        case 'a':
            if(i==0){
                printf("apple\n");
            }
            if(i==1){
                printf("anxious\n");
            }
            if(i==2){
                printf("arrow\n");
            }
            if(i==3){
                printf("angry\n");
            }
            break;

        case 'b':
            if(i==0){
                printf("begin\n");
            }
            if(i==1){
                printf("before\n");
            }
            if(i==2){
                printf("beloved\n");
            }
            if(i==3){
                printf("beyond\n");
            }
            break;


        case 'c':
            if(i==0){
                printf("camle\n");
            }
            if(i==1){
                printf("count\n");
            }
            if(i==2){
                printf("curious\n");
            }
            if(i==3){
                printf("co-operation\n");
            }
            break;



         case 'd':
             if(i==0){
                printf("dominate\n");
            }
            if(i==1){
                printf("dare\n");
            }
            if(i==2){
                printf("destroy\n");
            }
            if(i==3){
                printf("demon\n");
            }
            break;


        case 'e':
            if(i==0){
                printf("empire\n");
            }
            if(i==1){
                printf("eliminator\n");
            }
            if(i==2){
                printf("encourage\n");
            }
            if(i==3){
                printf("enhance8\n");
            }
            break;

        }
    }


    return 0;
}
