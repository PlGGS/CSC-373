#include	<stdlib.h>
#include	<stdio.h>

const int BUFFER_LEN = 256;

void obtainNumber(const char* questionPtr, int* numberPtr)
{
	char buffer[256];

	do
	{
		printf("Please enter a %s greater than 1\n", questionPtr);
		scanf_s("%d", numberPtr);
	} while (numberPtr <= 1);
}


int	countFactors(int dividend, int divisor)
{
	int	count = 0;



	return(count);
}



int		main()
{
	int	dividend;
	int	divisor;

	while (1)
	{
		obtainNumber("dividend", &dividend);
		obtainNumber("divisor", &divisor);

		printf("%d goes into %d %d times.\n",
			divisor, dividend, countFactors(dividend, divisor)
		);
	}

	return(EXIT_SUCCESS);
}