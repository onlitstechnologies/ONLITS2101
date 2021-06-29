#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    if(argc > 0)
    {
        for(i=1; i<argc; i++)
            printf("%s\n", argv[i]);
    }
    else
        printf("No commanline argument passes.\n");
    return 0;
}