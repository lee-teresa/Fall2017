#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node *next;
}
node;

bool search(int n, node *list);

node *head = NULL;

int main(void)
{
    // create linked list
    for (int i = SIZE; i > 0; i--)
    {
        //
        node *new = malloc(sizeof(node));

        //
        if (new == NULL)
        {
            exit(1);
        }

        //
        new->n = i;

        //
        new->next = head;

        //
        head = new;
    }

    int needle = get_int("what are you looking for? ");

    if (// TODO: call search function to find the needle!)
    {
        printf("found it!\n");
    }
    else
    {
        printf("not here!\n");
    }
}

bool search(int n, node *list)
{
    // create a traversal pointer
    node *ptr = list;

    // traverse until the end of the list
    while (ptr != NULL)
    {
        // if current n field is what we are looking for, return true
        if (ptr->n == n)
        {
            return true;
        }

        // if not, set ptr to the next pointer in the list
        ptr = ptr->next;
    }
    return false;
}
