#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20], str3[40];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("The new string is %s.\n", str3);
    return 0;
}