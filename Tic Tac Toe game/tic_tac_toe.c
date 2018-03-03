#include <stdio.h>

int main()
{
    char gameboard[3][3];
    int d,i,room,row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            gameboard[row][col]='n';
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("\t%c",gameboard[row][col]);
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
                gameboard[row][col]='X';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",gameboard[row][col]);
                    }
                    printf("\n\n");
                }
            }
            else if(i%2==0){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                gameboard[row][col]='O';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",gameboard[row][col]);
                    }
                    printf("\n\n");
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
                gameboard[row][col]='X';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",gameboard[row][col]);
                    }
                    printf("\n\n");
                }
            }
            else if(i%2==1){
                printf("insert room no\n");
                scanf("%d",&room);
                row=(room-1)/3;
                col=(room-1)%3;
                gameboard[row][col]='O';
                for(row=0;row<3;row++){
                    for(col=0;col<3;col++){
                        printf("\t%c",gameboard[row][col]);
                    }
                    printf("\n\n");
                }
            }
        }
    }

    printf("\n\n");
    return 0;
}
