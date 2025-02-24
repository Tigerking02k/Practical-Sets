// Write a C program to interchange two numbers
#include<stdio.h>
int main()
{
    printf("Welcome\n");
    int a, b;
    printf("Enter the first number a = ");
    scanf("%d", &a);
    printf("Enter the second number b = ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a = %d\nThe value of b = %d", a, b);
    return 0;
}