// Write a C program to input an integer number and check the last digit of number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number(for even - odd) = ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    return 0;
}