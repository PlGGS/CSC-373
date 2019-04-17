#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = /*0x40600000 = 3.5*/ 0xBF800000;
	float f = *(float*)&i;

	printf("0x%08X has the same bit pattern as %g\n", i, f);

	char ch;
	scanf_s(" %c", &ch); //pause

	return EXIT_SUCCESS;
}