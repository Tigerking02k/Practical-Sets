// Write a C program to check whether the entered character is capital, small letter, digit or any special character
#include <stdio.h>
int main()
{
    char ch;
    printf("Please, enter a character = ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is capital.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is small.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is digit.");
    }
    else
    {
        printf("The character is special.");
    }
    return 0;
}