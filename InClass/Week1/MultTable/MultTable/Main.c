#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;

	do
	{
		printf("Please enter an integer greater than 0\n");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (int i = 1; i <= n; i++)
	{
		for (int o = 1; o <= n; o++)
		{
			if (o < n)
			{
				printf("%d ", i * o);
			}
			else
			{
				printf("%d\n", i * o);
			}
		}
	}

	char ch;
	scanf_s(" %c", &ch); //pause
	return 1;
}