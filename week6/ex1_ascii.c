#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char message[] = "nop_t";

    printf("The hidden message is: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
    	// TODO: shift the value of the character by 5 in the line below!
    	printf("%c", message[i]);
    }
    printf("\n");
}