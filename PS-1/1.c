// Write a C program that performs as calculator (addition, multiplication, division, subtraction)
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    float sum, mul, div, sub;
    sum=a+b;
    mul=a*b;
    div=a/b;
    sub=a-b;
    printf("The addition of %.2f and %.2f is %.2f\n", a, b, sum);
    printf("The multiplication of %.2f and %.2f is %.2f\n", a, b, mul);
    printf("The division of %.2f and %.2f is %.2f\n", a, b, div);
    printf("The subtraction of %.2f and %.2f is %.2f\n", a, b, sub);
    return 0;
}