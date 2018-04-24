#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


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

    int len = str_len(str);

    char reverse_str[len];


    int i,j,k = 0, next_end = 0;

    for(i = 0; i < len; i++)
    {
        if('\0' == str[i+1])
        {
            for(j = i; j >= next_end; j--)
            {
                reverse_str[k] = str[j];
                k++;
            }
        }


        if(' ' == str[i])
        {
            for(j = i-1; j >= next_end; j--)
            {
                reverse_str[k] = str[j];
                k++;
            }

            reverse_str[k] = ' ';
            k++;

            next_end = i+1;
        }

    }

    printf("%s",reverse_str);

    return 0;
}
