#include<stdio.h>
int main()
{
    char c;
    FILE *fp1, *fp2;
    fp1 = fopen("Test1.txt", "r");
    fp2 = fopen("Test2.txt", "w");
    while (((c = getc(fp1)) != EOF))            //reading from file1
    {
        putc(c, fp2);                           //writing to file2
    }
    printf("Contents of file1 copied to file2.\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}