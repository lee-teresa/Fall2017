#include <stdio.h>
#include <cs50.h>

// Todo: declare

int main(void)
{
	printf("enter a number: ");
	int a = get_int();

	printf("enter another number: ");
	int b = get_int();

	// Todo: call function add()
	int answer = add(a, b);

    printf("answer is: %i\n", answer);

	return 0;
}

// Todo: define
