#include <stdio.h>

int main()
{
	double marks[5]={90.5,92,80,95,100};
	int roll;
	for(roll=1;roll<=5;roll++){
		printf("roll: %d, marks: %.2lf\n\n",roll,marks[roll-1]);

	}
	return 0;
}
