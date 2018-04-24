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

int chk_character(char c)
{
    if(c == ' ' || c == ',' || c == ';' || c == '!')
    {
        return 1;
    }

    return 0;
}


int main()
{
    char str[] = "I am a Programmer";

    int len = str_len(str);

    char reverse_str[len];

    int i,j,k = 0;

    for(i = 0;str[i] != '\0';i++)
    {
        if(chk_character(str[i]) || str[i+1] == '\0')
        {

            for(j = i-1;chk_character(str[j])|| j >= 0 ; j--)
            {


                reverse_str[k] = str[j];

                k++;
            }

            reverse_str[k] = ' ';
            k++;
        }
    }

    printf("%s\n",reverse_str);

    return 0;
}
