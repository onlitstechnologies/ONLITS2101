#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node NODE;

void insert_node();
void delete_node();
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
        printf("3. Delete Node\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye\n");
            exit(0);
            break;
        case 1:
            display_list();
            break;
        case 2:
            insert_node();
            break;
        case 3:
            delete_node();
            break;
        default:
            printf("\n\nInvalid Option!\n\n");
        }
    }
    return 0;
}

void insert_node()
{
    int data;
    NODE *current;
    printf("Enter an integer: ");
    scanf("%d", &data);
    if (first == NULL) //Code for inserting first node
    {
        current = malloc(sizeof(NODE));
        current->info = data;
        current->next = NULL;
        first = current;
    }
    else //Code for inserting other nodes
    {
        current = first;
        while (1)
        {
            if (current->next == NULL)
                break;

            current = current->next;
        }
        current->next = malloc(sizeof(NODE));
        current->next->info = data;
        current->next->next = NULL;
    }

    printf("\n\nNode Inserted!\n\n");
}

void delete_node()
{
    NODE *current;
    if (first == NULL)
    {
        printf("\n\nThe list is empty!\n\n");
    }
    else
    {
        current = first;
        while (1)
        {
            if(current->next==NULL)
            {
                first=NULL;
                printf("\n\nNode deleted! List is Empty Now!\n\n");
                break;
            }
            
            else if (current->next->next == NULL)
            {
                current->next = NULL;
                printf("\n\nNode deleted!\n\n");
                break;
            }
            current = current->next;
        }
    }
}

void display_list()
{
    NODE *current = first;
    printf("\n\n");
    if (first == NULL)
    {
        printf("The list is empty!");
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

    printf("\n\n");
}