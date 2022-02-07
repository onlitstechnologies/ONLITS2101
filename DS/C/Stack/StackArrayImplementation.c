#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void push(int stack[], int *size);
void pop(int stack[], int *size);
void print_stack(int stack[], int *size);

int main()
{
    int stack[SIZE], ch, size = 0;
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
            print_stack(stack, &size);
            break;
        case 2:
            push(stack, &size);
            break;
        case 3:
            pop(stack, &size);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void push(int stack[], int *size)
{
    int i;
    printf("Enter a number: ");
    if (*size > 0)
    {
        for (i = *size; i > 0; i--)
        {
            stack[i] = stack[i - 1];
        }
    }
    scanf("%d", &stack[0]);
    (*size)++;
    printf("\nValue pushed.\n\n");
}

void pop(int stack[], int *size)
{
    
}

void print_stack(int stack[], int *size)
{
    int i;
    if (*size <= 0)
    {
        printf("\nStack is empty. Nothing to display.\n\n");
    }
    else
    {
        printf("\nPrinting Stack...\n\n");
        for (i = 0; i < *size; i++)
        {
            printf("%d\n", stack[i]);
        }
        printf("\nEnd of list.\n\n");
    }
}