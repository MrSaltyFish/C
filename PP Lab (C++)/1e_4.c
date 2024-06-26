// Anvesh Khode
// 1e - WAP in C to print the following patterns-
// 4.
//      *
//    *   *
//  *   *   *
//    *   *
//      *

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = rows - 1; i >= 1; i--) {
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
