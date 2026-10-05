#include <stdio.h>
#include "print_sum.h"


void print_sum(int a, int c, int b)
{   
    printf("We have that a=%d, b=%d, c=%d\n", a, b, c);
    printf("The sum of %d,%d and %d is %d\n", a, b, c, a+c+b);
}