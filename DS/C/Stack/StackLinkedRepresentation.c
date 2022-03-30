#include <stdio.h>
#include <stdlib.h>

typedef struct node // structure declaration
{
    int info;
    struct node *next;
} NODE;

void print_stack(); // function declaration/prototype
void push();
void pop();

NODE *top = NULL; // global variable

int main()
{
    int ch;
    while (1)
    {
        printf("MAIN MENU:\n");
        printf("1. Print Stack\n");
        printf("2. Push Value\n");
        printf("3. Pop Value\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            print_stack();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void print_stack()
{
    NODE *current = top;
    if (current == NULL)
    {
        printf("\nStack is empty, nothing to print.\n\n");
        return;
    }

    printf("\nPrinting stack...\n\n");
    while (1) // infinite loop
    {
        if (current == NULL)
            break;
        printf("%d\n", current->info);
        current = current->next;
    }
    printf("\nEnd of stack\n\n");
    // free(current);
}

void push()
{
    NODE *temp;
    if (top == NULL) // Code for first node
    {
        top = malloc(sizeof(NODE));
        printf("\nEnter a value: ");
        scanf("%d", &top->info);
        top->next = NULL;
        printf("\nValue pushed\n\n");
        return;
    }

    temp = top;
    top = malloc(sizeof(NODE));
    printf("\nEnter a value: ");
    scanf("%d", &top->info);
    top->next = temp;
    printf("\nValue pushed\n\n");
    // free(temp);
}

void pop()
{
    if(top == NULL)     //Handling underflow condition
    {
        printf("\nStack is empty, nothing to pop\n\n");
        return ;
    }

    top = top->next;
    printf("\nValue popped\n\n");
}