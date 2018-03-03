#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *ptr;

	ptr = fopen("m_file.txt","w");

	if(ptr == NULL)
	{
		printf("Error\n");

		exit(1);
	} 

	char name[50];

	int marks,i,num;

	printf("Enter the number of students: ");

	scanf("%d",&num);

	for(i = 1;i<=num; i++)
	{
		printf("For student%d\nEnter name: ", i);
		scanf("%s", name);

		printf("Enter Marks\n");

		scanf("%d",&marks);

		fprintf(ptr, "\nName: %s \nMarks: %d",name,marks );
	}

	fclose(ptr);

	return 0;
}