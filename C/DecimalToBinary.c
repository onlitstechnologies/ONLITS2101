#include <stdio.h>
int main()
{
    int dec, bin=0, rem, temp, i=1;
    printf("Enter a number in decimal: ");
    scanf("%d", &dec);
    temp = dec;
    while (temp > 0)
    {
        rem = temp % 2;
        temp = temp / 2;
        bin = bin + rem * i;
        i = i * 10;
    }
    printf("The binary of %d is %d.\n", dec, bin);
    return 0;
}
