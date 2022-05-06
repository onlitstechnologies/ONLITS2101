#include <stdio.h>

void set_left_child(char data, int i);
void set_right_child(char data, int i);
void print_tree();

#define MAX 7
int tree[MAX];

int main()
{
    //--initializing root
    tree[0] = 'A';

    set_left_child('B', 0);
    set_right_child('C', 0);
    set_left_child('D', 1);
    set_right_child('E', 1);
    set_left_child('F', 2);
    set_right_child('G', 2);

    print_tree();
    return 0;
}

void set_left_child(char data, int i)
{
    if(tree[i] == '\0')
    {
        printf("No parent found");
    }
    else
    {
        tree[(2 * i) + 1] = data;
    }
}

void set_right_child(char data, int i)
{
    if(tree[i] == '\0')
    {
        printf("No parent found");
    }
    else
    {
        tree[(2 * i) + 2] = data;
    }
}

void print_tree()
{
    for(int i=0; i<MAX; i++)
    {
        if(tree[i] != '\0')
        {
            printf("%c", tree[i]);
        }
    }
    printf("\n");
}