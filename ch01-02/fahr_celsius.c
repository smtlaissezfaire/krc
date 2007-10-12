#include <stdio.h>

int main() {
	int fahr, celsius;
	int upper, lower, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	
	while(fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3dF\t%6dC\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}