#include<stdio.h>
int main()
{
    int i, n;
    FILE *fp;
    fp = fopen("Integer.txt", "w");
    printf("Enter 5 integers below:\n");
    for(i=1; i<=5; i++)
    {
        scanf("%d", &n);
        putw(n, fp);
    }
    fclose(fp);

    printf("The file contains the following information:\n");
    fp = fopen("Integer.txt", "r");
    // while((n=getc(fp)) != EOF)
    // {
    //     printf("%d", n);
    // }

    for(i=1; i<=5; i++)
    {
        n = getw(fp);
        printf("%d\n", n);
    }
    return 0;
}