#include <stdio.h>

/* print F-C table */

main()
{
	int fahr;

	for (int fahr = 0; fahr <= 300; fahr += 20)
	{
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}