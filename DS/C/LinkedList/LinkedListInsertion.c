#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node NODE;

void insert_node();
void display_list();
NODE *first = NULL;
int main()
{
    int ch;
    // NODE *first = NULL;
    while (1)
    {
        printf("Main Menu\n");
        printf("1. Display List\n");
        printf("2. Insert Node\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye\n");
            exit(0);
            break;
        case 1:
            display_list();
            printf("\n\nFirst contains %p.\n\n", first);
            break;
        case 2:
            insert_node();
            break;
        default:
            printf("\n\nInvalid Option!\n\n");
        }
    }
    return 0;
}

void insert_node()
{
    NODE *current;
    current = malloc(sizeof(NODE));
    current->info = 10;
    current->next = malloc(sizeof(NODE));
    if(first == NULL)
        first = current;
    printf("\n\nNode Inserted!\n\n");
}

void display_list()
{
    NODE *current = first;
    if (first == NULL)
    {
        printf("\n\nThe list is empty!\n\n");
    }
    else
    {
        printf("The elements of list are:\n");
        while (1)
        {
            printf("%d\n", current->info);
            if (current->next == NULL)
            {
                break;
            }
            current = current->next;
        }
    }
}