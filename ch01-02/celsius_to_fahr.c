#include <stdio.h>

main() {
	float celsius, fahr;
	int upper, lower, step;
	
	upper = 100;
	lower = 0;
	step = 20;
	
	celsius = lower;
	while(celsius <= upper) {
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%.0fC\t%.2fF\n", celsius, fahr);
		celsius += step;
	}
}