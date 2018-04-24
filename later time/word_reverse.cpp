#include <stdio.h>
#include <string.h>


typedef long long int lli;


int str_len(char str[])
{
    int i;

    int length = 0;

    for(i=0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}


int main()
{
    char str[] = "I am a Programmer";

    ///scanf("%[^\n]%*c",str);

    int len = str_len(str);

    char reverse_str[len];


    int i,j,k = 0, next_end = 0;

    for(i = 0; i < len; i++)
    {

        if(' ' == str[i])
        {
            for(j = i-1; j >= next_end; j--)
            {
                reverse_str[k] = str[j];
                k++;
            }

            str[k] = ' ';
            k++;

            next_end = i+1;
        }

    }

    printf("%s\n",reverse_str);

    return 0;
}
