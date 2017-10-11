#include <cs50.h>
#include <stdio.h>

#define SIZE 8

int search(int needle, int haystack[], int size)
{
    // iterative implementation
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {

        // TODO: -- Handle 3 cases: the value of the needle being smaller than, equal to, and larger than the value of the middle element in the array
        mid = (start + end) / 2;

		if (haystack[mid] == needle)
		{
			return true;
		}
		else if (haystack[mid] < needle)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}


    }
    return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108};
    printf("What number are you looking for? ");
    int n = get_int();
    if (search(n, numbers, SIZE))
    {
        printf("Found it\n");
    }
    else
    {
        printf("Not here\n");
    }
}