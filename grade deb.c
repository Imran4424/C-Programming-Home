#include <stdio.h>
int main()
{
    int x;
    char grade;
    scanf("%d",&x);
    if(x>=80)
    {
        grade='A+';
        printf("your grade is %c\n",grade);
    }
    else if(x>=70)
    {
        grade='a';
        printf ("your grade is %c\n",grade);
    }
    else if(x >=60)
    {
        grade='a-';
        printf("your grade is %c\n",grade);
    }
    else
    {
        printf("your grade is F");
    }

    return 0;

}
