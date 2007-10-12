#include <stdio.h>

main() {
	char c;
	
	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}