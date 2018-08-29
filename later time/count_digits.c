#include <stdio.h>

int main()
{
	int num, count = 0;

	scanf("%d", &num);

	while(num % 10 != 0)
	{
		count++;

		num = num / 10;
	}

	printf("%d\n", count);

	return 0;
}