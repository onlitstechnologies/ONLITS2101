#include<stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};

int main()
{
    struct date d;
    printf("Enter day: ");
    scanf("%d", &d.dd);
    printf("Enter month: ");
    scanf("%d", &d.mm);
    printf("Enter year: ");
    scanf("%d", &d.yyyy);
    printf("The date you entered is: %02d/%02d/%d\n", d.dd, d.mm, d.yyyy);
    return 0; 
}