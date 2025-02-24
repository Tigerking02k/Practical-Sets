#include <stdio.h>


void first(int);
void second(int);

int main() {
    int n;
    printf("Welcome to print pettern\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("\n(i) is here\n");
    first(n);
    printf("\n(ii) is here\n");
    second(n);
    return 0;
}

void first(int n) {
    char ch = 'A';
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }
}

void second(int n) {
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}