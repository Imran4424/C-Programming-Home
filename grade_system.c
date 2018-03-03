#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	char grade[5];
	if(x>=80){
		grade[5]='A+';
	}
	else if(x>=70){
		grade[5]='A';
	}
	else if(x>=60){
		grade[5]='A-';
	}
	else if(x>=50){
		grade[5]='B';
	}
	else if(x>=40){
		grade[5]='C';
	}
	else if(x>=33){
		grade[5]='E';
	}
	else{
		grade[5]='F';
	}
	printf("Grade is %s\n",grade);
	return 0;

}
