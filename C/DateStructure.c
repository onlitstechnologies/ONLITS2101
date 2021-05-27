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
    printf("Ente a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d.dd, &d.mm, &d.yyyy);
    printf("The date you entered is: %02d/%02d/%d\n", d.dd, d.mm, d.yyyy);
    return 0; 
}