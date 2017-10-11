#include <cs50.h>
#include <stdio.h>

void selection_sort(int a[], int size);
#define N 5

int main (void)
{
    //int n = 5;
    int numbers[N] = { 12, 8, 4, 16, 3};

    // print unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    // run selection sort
    selection_sort(numbers, N);

    // print sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

// partial implementation of selection sort
void selection_sort(int a[], int size)
{
    int temp, min_index;

    // start at first unsorted spot in array
    for (int i = 0; i < size ; i++)
    {

        min_index = i;

        // TODO:
        for (int i_unsorted = min_index + 1; i_unsorted < size; i_unsorted++)
        {

        }

        //TODO:
        if (i != min_index)
        {

        }
    }
}