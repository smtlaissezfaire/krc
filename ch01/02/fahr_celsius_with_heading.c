#include <stdio.h>

main() {
	float fahr, celsius;
	int upper, lower, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	printf("\n");
	printf("Fahrenheit to Celsius Conversion\n");
	printf("\n");
	printf("Fahrenheit\tCelsius\n");
	
	fahr = lower;
	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%.2fF\n%.2fC\n", fahr, celsius);
		fahr += step;
	}

}
