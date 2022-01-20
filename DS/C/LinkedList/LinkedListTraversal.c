#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};

typedef struct node NODE;

int main()
{
    NODE *first, *current;
    first = malloc(sizeof(NODE));   //first node
    first->info = 10;
    first->next = malloc(sizeof(NODE));     //second node
    first->next->info = 20;
    first->next->next = malloc(sizeof(NODE));
    first->next->next->info = 30;
    first->next->next->next = malloc(sizeof(NODE));
    first->next->next->next->info = 40;
    first->next->next->next->next = NULL;

    //Linked List Traversal
    current = first;
    printf("The elements of list are:\n");
    while(1)
    {
        printf("%d\n", current->info);
        if(current->next == NULL)
        {
            break;
        }
        current = current->next;
    }
    return 0;
}