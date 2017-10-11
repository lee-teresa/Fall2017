/*You want to create two arrays to keep track of student id
and gpa, but want them to be dynamic -- so that if more
students register in the future, you can add them, too.
To this purpose, allocate memory for these arrays of
size SIZE dynamically, using malloc().
*/

#include <stdio.h>
#include <cs50.h>

#define SIZE 4

int main(void)
{
    // TODO: allocate memory for dynamic arrays, and 'fill' them both
    int *id_array = malloc(sizeof(int) * SIZE); // TODO
    float *gpa_array = malloc(sizeof(float) * SIZE);// TODO

    // get input with student data
    for (int i = 0; i < SIZE; i++)
    {
        printf("please enter student id:\n");
        int x = get_int();
        id_array[i] = x;
        printf("please enter student gpa:\n");
        float y = get_float();
        gpa_array[i] = y;
    }

    // print ids and gpas
    for (int i = 0; i < SIZE; i++)
    {
        printf("student %i\nid: %i \t gpa: %.2f\n", i + 1, id_array[i], gpa_array[i]);
    }

    // TODO: Free memory allocated
    free(id_array);
    free(gpa_array);

}