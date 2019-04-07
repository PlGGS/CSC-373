#include	<stdlib.h>
#include	<stdio.h>

const int BUFFER_LEN = 256;

void obtainNumber(const char* questionPtr, int* numberPtr)
{
	char buffer[256];

	do
	{
		printf("Please enter a %s greater than 1\n", questionPtr);
		scanf_s("%d", numberPtr); //Use scanf if in Linux, VS2017 requires scanf_s
	} while (*numberPtr <= 1);
}


int	countFactors(int dividend, int divisor)
{
	int	count = 0;

	while (dividend % divisor == 0) //This should be while (dividend >= divisor) if you actually want the number of factors and not just the remainder
	{
		dividend = dividend / divisor; //This should technically be dividend = dividend - divisor if you actually want number of factors and not just the remainder
		count++;
	}

	return(count);
}

int	countActualFactors(int dividend, int divisor)
{
	int	count = 0;

	while (dividend >= divisor)
	{
		dividend = dividend - divisor;
		count++;
	}

	return(count);
}

int	main()
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
		printf("%d actually goes into %d %d times.\n",
			divisor, dividend, countActualFactors(dividend, divisor)
		);
	}

	return(EXIT_SUCCESS);
}