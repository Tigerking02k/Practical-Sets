// Write a C program to read marks from keyboard and your program should display equivalent grade according to following range (using else.. if ladder) [100 - 80 Distinction, 79 - 60 First Class, 59 - 40 Second Class, < 40 Fail ]
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks = ");
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100)
    {
        printf("Grade = Distinction");
    }
    else if (marks >= 60 && marks <= 79)
    {
        printf("Grade = First class");
    }
    else if (marks >= 40 && marks <= 59)
    {
        printf("Grade = Second class");
    }
    else if (marks < 40 && marks >= 0)
    {
        printf("Grade = Fail");
    }
    else
    {
        printf("Enter a marks in between 0 to 100.");
    }
    return 0;
}