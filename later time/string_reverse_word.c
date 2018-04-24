#include <stdio.h>


typedef long long int lli;


int str_len(char str[])
{
    int i;

    int length = 0;

    for(i=0;str[i] != '\0'; i++)
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

    int i,j,k;

    for(i=0; i <len;i++)
    {
        if(str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '!')
        {
            for(j=i-1;str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '!'|| j < 0 ; j--)
            {

            }
        }
    }

    return 0;
}
