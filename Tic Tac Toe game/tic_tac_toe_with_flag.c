#include <stdio.h>

int main()
{
    char g[3][3];
    int d,i,room,row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            g[row][col]='n';
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("\t%c",g[row][col]);
        }
        printf("\n\n");
    }
    printf("Insert 1 to play player X first\n");
    printf("Insert 0 to play player O first\n");
    scanf("%d",&d);

    if(d==1){
        for(i=1;i<=9;i++){
            if(i%2==1){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                g[row][col]='X';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",g[row][col]);
                    }
                    printf("\n\n");
                }

                while(i>4 && (g[0][0]==g[0][1]==g[0][2] || g[1][0]==g[1][1]==g[1][2] || g[2][0]==g[2][1]==g[2][2] || g[0][0]==g[1][0]==g[2][0] || g[0][1]==g[1][1]==g[2][1] || g[0][2]==g[1][2]==g[2][2] || g[0][0]==g[1][1]==g[2][2] || g[0][2]==g[1][1]==g[2][0])){

                    printf("winner is player X\n");
                    goto finish;
                    break;
                }

            }
            else if(i%2==0){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                g[row][col]='O';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",g[row][col]);
                    }
                    printf("\n\n");
                }

                while(i>4 && (g[0][0]==g[0][1]==g[0][2] || g[1][0]==g[1][1]==g[1][2] || g[2][0]==g[2][1]==g[2][2] || g[0][0]==g[1][0]==g[2][0] || g[0][1]==g[1][1]==g[2][1] || g[0][2]==g[1][2]==g[2][2] || g[0][0]==g[1][1]==g[2][2] || g[0][2]==g[1][1]==g[2][0])){

                    printf("winner is player O\n");
                    goto finish;
                    break;
                }

            }
        }
    }

    else if(d==0){
        for(i=1;i<=9;i++){
            if(i%2==0){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                g[row][col]='X';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",g[row][col]);
                    }
                    printf("\n\n");
                }

                while(i>4 && (g[0][0]==g[0][1]==g[0][2] || g[1][0]==g[1][1]==g[1][2] || g[2][0]==g[2][1]==g[2][2] || g[0][0]==g[1][0]==g[2][0] || g[0][1]==g[1][1]==g[2][1] || g[0][2]==g[1][2]==g[2][2] || g[0][0]==g[1][1]==g[2][2] || g[0][2]==g[1][1]==g[2][0])){

                    printf("winner is player X\n");
                    goto finish;
                    break;
                }


            }
            else if(i%2==1){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                g[row][col]='O';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",g[row][col]);
                    }
                    printf("\n\n");
                }

                while(i>4 && (g[0][0]==g[0][1]==g[0][2] || g[1][0]==g[1][1]==g[1][2] || g[2][0]==g[2][1]==g[2][2] || g[0][0]==g[1][0]==g[2][0] || g[0][1]==g[1][1]==g[2][1] || g[0][2]==g[1][2]==g[2][2] || g[0][0]==g[1][1]==g[2][2] || g[0][2]==g[1][1]==g[2][0])){

                    printf("winner is player O\n");
                    goto finish;
                    break;
                }

            }
        }
    }
    finish: printf("\n\n");
    return 0;
}
