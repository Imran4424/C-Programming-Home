#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *ptr;

	ptr = fopen("m_file.txt","r");

	if(ptr == NULL)
	{
		printf("Error\n");

		exit(1);
	}


	char name[50];
	int num,i,marks;

	printf("Enter the student number\n");

	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fscanf(ptr,"%s %d",name, &marks);

		printf("Name: %s \nMarks: %d \n",name,marks );
	}


	fclose(ptr);

	return 0;
}