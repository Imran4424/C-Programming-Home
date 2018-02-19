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
    printf("input a position to delete number\n");
    scanf("%d",&p);

    if(p>0 && p<=n){
        printf("position unavailable\n");
    }
    else{
        for(i=p;i<n-1;i++){
            if(i==p){
                a[p]=a[p+1];
            }
            else{
                a[i]=a[i+1];
            }
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}
