#include <stdio.h>

/* print Fahrenheit-Celsius table with floats
	for fahr = 0, 20, ..., 300 */ 

main()
{
	float fahr, celsius;		/* Declare variables */ 
	int lower, upper, step;

							/* Assignment statements */
	lower = 0; 				/* lower limit for temperature table */
	upper = 300;			/* upper limit */
	step = 20;				/* step size */

	fahr = lower;
	printf("%*c %*c\n", 3, 'f', 6, 'c');
	printf("%*s %*s\n", 3, "---", 6, "---");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}