#include <stdio.h>

int main()
{
	FILE *ptr;

	ptr = fopen("readme.txt","r");

	char str[256];

	fscanf(ptr,"%[^\n]s",str); // to read


	printf("%s\n", str);

	fclose(ptr);

	return 0;
}
