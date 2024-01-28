#include <stdio.h>

int main() {
    int i, j, num;

    for (i = 1; i < 8; i++) {
        for (j = 1; j <= 8 - i; j++) {
            printf(" ");
        }

        for (j = i; j < 2 * i; j++) {
            printf("%d", j % 10);
        }

        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d", j % 10);
        }

        printf("\n");
    }

    return 0;
}
