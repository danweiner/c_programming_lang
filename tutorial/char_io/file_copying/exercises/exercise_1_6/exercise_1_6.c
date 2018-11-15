#include <stdio.h>

/* enter char at prompt, see 1 as result */

int main(void)
{
    printf("%d\n", getchar() != EOF); // shows that getchar() != EOF is 1
}