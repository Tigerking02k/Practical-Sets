#include <stdio.h>

void lowerTriangle(int);
void pyramid(int);
void upperTriangle(int);

int main() {
    int n;
    printf("Welcome to print Star Petterns.\n");
    printf("Please enter rows: ");
    scanf("%d", &n);

    printf("\nLower Triangle\n");
    lowerTriangle(n);

    printf("\nPyramid\n");
    pyramid(n);

    printf("\nUpper Triangle\n");
    upperTriangle(n);
    return 0;
}

void lowerTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf(" *");
        }
        printf("\n");
    }
}

void upperTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }
}