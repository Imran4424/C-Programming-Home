#include <stdio.h>


typedef long long int lli;

int ascending_chk(int ar[], int ar_size)
{
    int next_min_val = ar[0];

    for(int i=0;i < ar_size; i++)
    {
        if(ar[i] < next_min_val)
        {
            return 0;
        }
        else
        {
            next_min_val = ar[i];
        }
    }

    return 1;
}

int decending_chk(int ar[], int ar_size)
{
    int next_max_val = ar[0];

    for(int i = 0;i < ar_size; i++)
    {
        if(ar[i] > next_max_val)
        {
            return 0;
        }
        else
        {
            next_max_val = ar[i];
        }
    }
}


int array_sor_chk(int ar[], int ar_size)
{
    if(ascending_chk(ar,ar_size) || decending_chk(ar,ar_size))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;

    printf("Input the array size\n");
    scanf("%d",&n);

    int ar[n];

    printf("Now input the array\n");

    for(int i = 0; i<n; i++) ///here ++i or i++ does not matter at all, the same effect will happen
    {
        scanf("%d", &ar[i]);
    }

    if(array_sor_chk(ar,n))
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is not sorted\n");
    }

    return 0;
}
