#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void print_queue();

typedef struct node
{
    int info;
    struct node *next;
} NODE;

NODE *front = NULL;

int main()
{
    while (1)
    {
        int ch;
        printf("MAIN MENU:\n");
        printf("1. Print Queue\n");
        printf("2. Enqueue\n");
        printf("3. Dequeue\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            print_queue();
            break;
        case 2:
            enqueue();
            break;
        case 3:
            dequeue();
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void printf_queue()
{
    NODE *current = front;

    if(current == NULL)
    {
        printf("\nQueue is empty, nothing to print\n\n");
        return;
    }


}