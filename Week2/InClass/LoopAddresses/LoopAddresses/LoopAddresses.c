#include <stdio.h>
#include <stdlib.h>

///Loops through an declared in main without directly referencing it
int Loop(int* ptr, int a) 
{
	for (*ptr = 0; *ptr <= 9; (*ptr)++)
	{
		printf("%d\n", a);
	}
}

int main()
{
	int a = 42;
	int i = 0;
	int* iPtr = &i;

	Loop(iPtr, a);

	char ch;
	scanf_s(" %c", &ch); //pause

	return EXIT_SUCCESS;
}