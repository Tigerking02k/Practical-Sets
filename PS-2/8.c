// Write a C program to find that the accepted number is Negative, Positive or Zero
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The number is negative.");
    }
    else if (n > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is zero.");
    }
    return 0;
}