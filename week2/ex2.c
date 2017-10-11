#include <stdio.h>
#include <cs50.h>

int twice(int num);

int main(void)
{
	printf("enter a number: ");

	int num = get_int();
	int answer = twice(num);

    printf("double of your number is: %i\n", answer);

	return 0;
}

int twice(int x)
{
    int result = x*2;
    return result;
}