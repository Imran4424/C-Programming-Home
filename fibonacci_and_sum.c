#include <stdio.h>

int main()
{
    int sum = 0,first = 0,second = 1,fibonacci_digit,num_of_fibonacci;

    printf("Input the num of fibonacci digits you want to count\n");

    scanf("%d",&num_of_fibonacci);

    sum = first + second;

    printf("%d %d ",first,second);

    int i;

    for(i=3;i<=num_of_fibonacci;i++)
    {
        fibonacci_digit = first + second;
        first = second;
        second = fibonacci_digit;

        sum += fibonacci_digit;

        printf("%d ",fibonacci_digit);

    }

    printf("\nSum is: %d\n",sum);

    return 0;
}
