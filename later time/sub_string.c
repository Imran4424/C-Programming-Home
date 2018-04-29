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

    int i,j;

    scanf("%[^\n]%*c",str);
    scanf("%[^\n]%*c",str2);

    str_len = string_size(str);
    str2_len = string_size(str2);

    return 0;
}
