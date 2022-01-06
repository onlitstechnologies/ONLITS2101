#include <stdio.h>
#define MAX 10
void display(int arr[], int size);
int main()
{
    int arr[MAX], size = 0, value, index, i;
    char ch;

    while (1)
    {
        printf("Enter the value to insert: ");
        scanf("%d", &value);
        printf("Enter the index: ");
        scanf("%d%*c", &index);
        if (index >= 0 && index <= size)
        {
            for (i = size; i > index; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            size++;
        }
        else
        {
            printf("Not a valid index! Try again!\n");
        }

        display(arr, size);
        
        printf("Do you want to insert more values (y/n): ");
        scanf("%c", &ch);
        if (ch == 'n')
        {
            break;
        }
    }
    return 0;
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}