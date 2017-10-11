#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char *ptr = malloc(sizeof(char) * 7);
    printf("please enter a 6-letter username, char-by-char (hit enter after each character):\n");
    for (int i = 0; i < 6; i++)
    {
        *(ptr + i) = get_char();
    }

    ptr[6] = '\0';
    printf("The username you entered is: ");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    // TODO: free

}