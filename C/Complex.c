#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};

typedef struct complex COMPLEX;

COMPLEX sum(COMPLEX c1, COMPLEX c2);
void display(COMPLEX c);

int main()
{
    COMPLEX c1, c2, c3;
    printf("Enter a complex number (r, i): ");
    scanf("%f, %f", &c1.real, &c1.imaginary);
    printf("Enter another complex number (r, i): ");
    scanf("%f, %f", &c2.real, &c2.imaginary);
    c3 = sum(c1, c2);
    printf("c1: ");
    display(c1);
    printf("c2: ");
    display(c2);
    printf("c3 (sum): ");
    display(c3);
    return 0;
}

COMPLEX sum(COMPLEX c1, COMPLEX c2)
{
    COMPLEX c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

void display(COMPLEX c)
{
    printf("real: %1.1f, imaginary: %1.1f\n", c.real, c.imaginary);
}