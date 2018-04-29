#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len1, len2;
    char str1[56],str2[46];

    printf("Enter a string: ");
    gets(str1);
    printf("Enter the sub string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i = 0; i <(len1 - len2); i++)
    {

        if(str2[0] == str1[i])
        {

            for(j = 1; j < len2; j++)
            {

                if(str2[j] != str1[i+j])
                {

                    break;
                }
            }
            if(j  == len2)
            {

                printf("%d\n", i);
                printf("sub string is found\n");
                break;
            }
        }

    }
    return 0;
}
