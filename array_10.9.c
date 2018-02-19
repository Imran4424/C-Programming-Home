#include <stdio.h>

int main()
{
    int a[100],i,p,n;
    printf("input array size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    printf("input a position to insert number\n");
    scanf("%d",&p);

    if(p>=0 && p<n){
        for(i=n-1;i>=1;i--){
            if(i>=p){
                a[i+1]=a[i];
            }
            if(i==p){
                    scanf("%d",&a[p]);
            }
        }
    }
    if( p<0 && p>=n){
        printf("position unavailable\n");
    }
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}
