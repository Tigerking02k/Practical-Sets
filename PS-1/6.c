// Write a C program to compute Fahrenheit from centigrade (f=1.8*c +32)
#include <stdio.h>
int main()
{
    float f, c;
    printf("Welcome to find fahrenheit from centigrade\n");
    printf("Enter a centigrade value c = ");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("The fahrenheit value is %.2f", f);
    return 0;
}