#include <stdio.h>


int string_size(char str[])
{
    int i,sz = 0;

    for(i=0;str[i] != '/0';i++)
    {
        sz++;
    }

    return sz;
}


int main()
{
    char str[50],str2[50];

    int i,j,str_len,str2_len, fou;

    scanf("%[^\n]%*c",str);
    scanf("%[^\n]%*c",str2);

    str_len = string_size(str);
    str2_len = string_size(str2);

    for(i = 0;i < (str_len - str2_len); i++)
    {
        if(str2[0] == str[i])
        {
            for(j = 1;j < str2_len;j++)
            {
                i++;

                if(str[j] != str[i])
                {
                    break;
                }
            }

            if(j == str2_len)
            {
                printf("Sub string is found\n");

                break;
            }
        }
    }

    return 0;
}
