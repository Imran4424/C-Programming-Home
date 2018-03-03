#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *ptr;

	ptr = fopen("readme.txt","w");

	if(ptr == NULL)
	{
		printf("Error\n");

		exit(1);
	}

	char words[256];

	printf("Enter your words\n");
	scanf("%[^\n]s",words);

	fprintf(ptr, "%s\n", words);	// to write 

	fclose(ptr);

	return 0;
}
