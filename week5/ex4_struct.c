#include <cs50.h>
#include <stdio.h>

// user_info struct definition
typedef struct
{
    string carrier;
    string name;
    long number;
    float incoming_mins;
    float outgoing_mins;
} user_info;

int main (void)
{

    // TODO: declare a struct user_info called test on the heap



    // TODO: edit below to dereference the pointer test and access each field
    test.carrier = "AT&T";
    test.name = "David Malan";
    test.number = 6174852315;
    test.incoming_mins = 134.2;
    test.outgoing_mins = 256.1;

    // print info
    printf("User info is: \n");
    printf("carrier: %s\n", test -> carrier);
    printf("name: %s\n", test -> name);
    printf("number: %li\n", test -> number);
    printf("incoming minutes: %.2f\n", test -> incoming_mins);
    printf("outgoing minutes: %.2f\n", test -> outgoing_mins);
}