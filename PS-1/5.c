// Write a C program to enter a distance into kilometer and convert it in to meter, feet, inches and centimeter
#include<stdio.h>
int main()
{
    char ch;
    float km;
    printf("Enter a distance(km) = ");
    scanf("%f", &km);
    printf("Enter a character to find distance in meter(m), feet(f), inch(i), centimeter(c) = ");
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'm': printf("The distance in (meter) = %.2f", km*1000);
        break;
        case 'f': printf("The distance in (feet) = %.2f", km*3280.84);
        break;
        case 'i': printf("The distance in (inch) = %.2f", km*39370.08);
        break;
        case 'c': printf("The distance in (centimeter) = %.2f", km*100000);
        break;
        default: printf("m for meters\nf for feet\ni for inches\nc for centimeters");
    }
    return 0;
}