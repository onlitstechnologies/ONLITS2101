#include<stdio.h>
int main()
{
    FILE *fp;           //creating a file pointer
    char c;

    // ---------------- File Write ---------------------
    fp = fopen("Test.txt","w");     //file opened for writing
    printf("Enter a string: ");
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    printf("File created successfully!\n");
    fclose(fp);

    //--------------- File Read ------------------------

    fp = fopen("Test.txt", "r");    //file opened for reading
    printf("\nThe file contains the following information:\n");
    while ((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");
    return 0;
}