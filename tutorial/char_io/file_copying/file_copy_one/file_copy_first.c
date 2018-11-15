/*
read a char
while (char is not end-of-file indicator)
    output char just read
    read a char
*/

#include <stdio.h>

/* copy input to output; first version -
    type chars at prompt to see output
    in terminal */

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}