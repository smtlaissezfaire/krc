#include <stdio.h>

main() {
	int c;
	
	printf("type a char to see if the char is not equal to EOF\n");
	printf("value: %d\n", getchar() != EOF);
}