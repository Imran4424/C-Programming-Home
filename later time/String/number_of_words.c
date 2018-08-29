#include <stdio.h>

int main()
{
	char str[100];
	scanf("%[^\n]", str);

	int words = 0, white_spaces = 0, full_stops = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
		{
			white_spaces++;
		}

		if (str[i] == '.')
		{
			full_stops++;
		}

		if ((str[i] == ' ' || str[i] == '.'))
		{
			words++;

			while (str[i+1] == ' ' || str[i+1] == ' ')
			{
				if (str[i+1] == ' ')
				{
					white_spaces++;
				}

				if (str[i+1] == '.')
				{
					full_stops++;
				}

				i++;
			}
		}
	}

	printf("Number of Words: %d\n", words);
	printf("Number of White Spaces: %d\n", white_spaces);
	printf("Number of Full stops: %d\n", full_stops);

	return 0;
}