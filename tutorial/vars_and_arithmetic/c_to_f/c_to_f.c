#include <stdio.h>

/* print Celsius-Fahrenheit table with floats
	for celsius = 0, 10 ... 100 */ 

main()
{
	float fahr, celsius;		/* Declare variables */ 
	int lower, upper, step;

							/* Assignment statements */
	lower = 0; 				/* lower limit for temperature table */
	upper = 100;			/* upper limit */
	step = 10;				/* step size */

	celsius = lower;
	printf("%*c %*c\n", 3, 'c', 6, 'f');
	printf("%*s %*s\n", 3, "---", 6, "---");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}