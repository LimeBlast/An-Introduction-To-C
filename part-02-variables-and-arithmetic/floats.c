#include <stdio.h>

int main (void)
{
    float a;
    float b = 3.12;
    float c;

    a = 2.32;
    c = a + b;
    printf ("The result of adding %f and %f is %f\n", a, b, c);
    printf ("The result of adding %.3f and %.3f is %.3f\n", a, b, c);
}
