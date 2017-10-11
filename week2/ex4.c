#include <cs50.h>
#include <stdio.h>

#define COUNT 3

int main(void)
{
    int countdown[COUNT] = {9, 8, 7};
    for (int i = 0; i <= COUNT; i++)
    {
        if (i == 9)
        	printf("%d!\n", countdown[i]);
    	else
    		printf("%d..", countdown[i]);
    }    
}