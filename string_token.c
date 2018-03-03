#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char s[2]="\0";
	char token;
	gets(str);


   token = strtok(str,s);
   while( token != '\0' )
   {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

	return 0;
}
