#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void insert_end(int arr[], int *size);
void insert_at(int arr[], int *size, int in);
void delete_end(int arr[], int *size);
void delete_at(int arr[], int *size, int in);
void display(int arr[], int *size);

int main()
{
    int arr[MAX];                             //static allocation
    //int *arr = malloc(MAX * sizeof(int));   //dynamic allocation
    int size = 0, ch, in;

    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Insert at the end\n");
        printf("2. Insert at a particular index\n");
        printf("3. Delete from the end\n");
        printf("4. Delete at a particular index\n");
        printf("5. Display array\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_end(arr, &size);
            break;
        case 2:
            printf("\nEnter index: ");
            scanf("%d", &in);
            insert_at(arr, &size, in);
            break;
        case 3:
            delete_end(arr, &size);
            break;
        case 4:
            printf("\nEnter index: ");
            scanf("%d", &in);
            delete_at(arr, &size, in);
            break;
        case 5:
            display(arr, &size);
            break;
        case 6:
            exit(0);
            break;
        }
    }
    return 0;
}

void insert_end(int arr[], int *size)
{
    printf("Enter a number: ");
    scanf("%d", &arr[*size]);
    printf("\nItem inserted at index %d.\n\n", *size);
    (*size)++;
}

void insert_at(int arr[], int *size, int in)
{
    int i;
    for(i=*size; i>=in; i--)
    {
        arr[i] = arr[i-1];
    }
    (*size)++;
    printf("Enter a number: ");
    scanf("%d", &arr[in]);
    printf("\nItem inserted at index %d.\n\n", in);
}

void delete_end(int arr[], int *size)
{
    if (*size == 0)
    {
        printf("\nThe size of array is 0. There is nothing to delete!\n\n");
    }
    else
    {
        (*size)--;
        printf("\nItem at index %d deleted!\n\n", *size);
    }
}

void delete_at(int arr[], int *size, int in)
{
    int i;
    for(i=in; i<*size; i++)
    {
        arr[i] = arr[i+1];
    }
    (*size)--;
    printf("\nItem at index %d deleted!\n\n", in);
}

void display(int arr[], int *size)
{
    int i;
    if (*size == 0)
    {
        printf("\nThe array is empty!\n\n");
    }
    else
    {
        printf("\nThe contents of the array are:\n");
        for (i = 0; i < *size; i++)
        {
            printf("%d\n", arr[i]);
        }
        printf("\n");
    }
}