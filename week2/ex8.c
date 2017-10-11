#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Todo: input verification
    if (argc != 2)
    {
        printf("usage: ./ex8 [name]");
        return 1;
    }
    // Todo: print "Bye bye [name]"

    printf("bye bye %s", argv[1]);

    return 0;
}