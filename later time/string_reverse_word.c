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

int chk_character(char c)
{
    if(c == ' ')
    {
        return 1;
    }

    return 0;
}


int main()
{
    char str[20];

    scanf("%[^\n]%*c",str);

    int len = str_len(str);

    char reverse_str[len];

    int i,j,k = 0,done;

    for(i = 0; i < len; i++)
    {
        if(chk_character(str[i]) || str[i+1] == '\0')
        {
            if(str[i+1] == '\0')
            {
                done = 0;
            }


            for(j = i-1; chk_character(str[j]); j--)
            {
                if(str[i+1] == '\0' && done == 0)
                {
                    j = i;

                    done = 1;
                }

                printf("%d %d\n",j,k);

                reverse_str[k] = str[j];

                k++;

                if( j == 0)
                {
                    break;
                }
            }

            reverse_str[k] = ' ';
            k++;
        }
    }

    printf("%s\n",reverse_str);

    return 0;
}
