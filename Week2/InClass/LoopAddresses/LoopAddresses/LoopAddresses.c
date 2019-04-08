#include <stdio.h>
#include <stdlib.h>

int Loop(int* ptr, int i) 
{
	for (*ptr = 0; *ptr <= 9; (*ptr)++) {
		printf("%d\n", i);
	}
}

int main()
{
	int i = 3;
	int* iPtr = &i;

	Loop(iPtr, i);

	char ch;
	scanf_s(" %c", &ch); //pause

	return EXIT_SUCCESS;
}