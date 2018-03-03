#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],str2[30];
    gets(str);
    gets(str2);
    strcpy(str+16,str2);
    strcat(str," and a lovely country");
    puts(str);
	return 0;
}


