#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x was %i\n", x);
    printf("y was %i\n", y);

    // TODO: call on swap function
    swap (&x, &y);

    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap(int *a, int *b)
{
    // TODO: what goes on here?
    int tmp = *a
    *a = *b
    *b = tmp; 
}