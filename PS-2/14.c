// Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number from (1 - 7) to find day (Sunday - Saturday) = ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("Sunday");
        break;
        case 2: printf("Monday");
        break;
        case 3: printf("Tuesday");
        break;
        case 4: printf("Wednesday");
        break;
        case 5: printf("Thursday");
        break;
        case 6: printf("Friday");
        break;
        case 7: printf("Saturday");
        break;
        default: printf("Enter a number in between 1 - 7 for Sunday - Saturday");
    }
    return 0;
}