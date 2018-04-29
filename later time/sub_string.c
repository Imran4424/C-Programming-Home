#include <stdio.h>
#include <string.h>

int string_size(char str[])
{
    int i,sz = 0;

    for(i=0;str[i] != '\0';i++)
    {
        sz++;
    }

    return sz;
}


int main()
{
    char str[50],str2[50];

    int i,j,str_len,str2_len, found = 0;

    scanf("%[^\n]%*c",str);
    scanf("%[^\n]%*c",str2);

    str_len = strlen(str);
    str2_len = strlen(str2);

    for(i = 0;i < str[i] != '\0'; i++)
    {
        if(str2[0] == str[i])
        {
            for(j = 1;j < str2_len;j++)
            {
                i++;

                if(str[j] != str[i])
                {
                    printf("%c %c\n",str[i],str2[j]);

                    break;
                }
            }


            if(j == str2_len)
            {
                printf("Sub string is found\n");

                found = 1;
                break;
            }
        }

        printf("Hi, i am here - %c\n",str[i]);
    }

    if(found == 0)
    {
        printf("Sub string is not found\n");
    }

    return 0;
}
