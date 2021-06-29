#include<stdio.h>
int main(int argc, char *argv[])
{
    int value;
    FILE *fp1, *fp2, *fp3;
    if(argc==4)
    {
        fp1 = fopen(argv[1], "r");
        fp2 = fopen(argv[2], "r");
        fp3 = fopen(argv[3], "w");
        
        
        
        while((value=getw(fp1)) != EOF)
        {
            putw(value, fp3);
            printf("%d\n", value);
        }
        putc('\n', fp3);
        while((value=getw(fp2)) != EOF)
        {
            putw(value, fp3);
        }
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }
    else
    {
        printf("There should 3 files altogether!\n");
    }
}