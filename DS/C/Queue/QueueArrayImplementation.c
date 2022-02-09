#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void enqueue(int queue[], int *size);
void dequeue(int queue[], int *size);
void print_queue(int queue[], int *size);

int main()
{
    int queue[SIZE], ch, size = 0;
    while(1)
    {
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
            print_queue(queue, &size);
            break;
        case 2:
            enqueue(queue, &size);
            break;
        case 3:
            dequeue(queue, &size);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void enqueue(int queue[], int *size)
{
    if (*size >= SIZE)
    {
        printf("\nQueue is full, cannot continue.\n\n");
    }
    else
    {
        printf("Enter a number: ");
        scanf("%d", &queue[*size]);
        (*size)++;
        printf("\nValue added.\n\n");
    }
}

void dequeue(int queue[], int *size)
{

}

void print_queue(int queue[], int *size)
{
    int i;
    if(*size <= 0)
    {
        printf("\nQueue is empty, nothing to display.\n\n");
    }
    else
    {
        printf("\nPrinting queue ...\n\n");
        for(i = 0; i < *size; i++)
        {
            printf("%d\n", queue[i]);
        }
        printf("\nEnd of list.\n\n");
    }
}