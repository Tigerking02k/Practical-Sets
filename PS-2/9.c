// Write a C program to read marks of a student from keyboard and check whether the student is pass (marks more than 40) or fail (using if else)
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks = ");
    scanf("%d", &marks);
    if (marks >= 40 && marks <= 100)
    {
        printf("The student is pass.");
    }
    else if (marks < 40 && marks >= 0)
    {
        printf("The student is fail.");
    }
    else
    {
        printf("Please enter your marks in between 0 to 100.");
    }
    return 0;
}