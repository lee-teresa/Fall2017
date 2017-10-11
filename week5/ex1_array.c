#include <string.h>
#include <stdio.h>
#include <cs50.h>

#define STUDENTS 3

int main(void)
{
    string name[STUDENTS] = {"teresa", "doug", "pete"};
    int year[STUDENTS] = {2017, 2019, 2018};
    float gpa[STUDENTS] = {3.2, 3.9, 3.8};

    for(int i = 0; i < STUDENTS; i++)
    {
        printf("student %i: %s, %i, %.2f \n", i, name[i], year[i], gpa[i]);
    }
}