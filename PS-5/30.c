#include <stdio.h>

void first(int);
void second(int);
void third(int);
void forth(int);

int main() {
    int n;
    printf("Welcome to print petterns\n");
    printf("Please enter rows do you want to print: ");
    scanf("%d", &n);
    printf("\n(i) is here\n");
    first(n);
    printf("\n(ii) is here\n");
    second(n);
    printf("\n(iii) is here\n");
    third(n);
    printf("\n(iv) is here\n");
    forth(n);
    return 0;
}

void first(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void second(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void third(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void forth(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}