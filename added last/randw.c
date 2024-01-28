#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int i, j, size, diagonal_sum = 0, opposite_diagonal_sum = 0;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of squares in the main diagonal
    for (i = 0; i < size; i++) {
        diagonal_sum += matrix[i][i] * matrix[i][i];
    }

    // Calculate the sum of squares in the opposite diagonal
    for (i = 0; i < size; i++) {
        opposite_diagonal_sum += matrix[i][size - 1 - i] * matrix[i][size - 1 - i];
    }

    // Display the results
    printf("Sum of squares in the main diagonal: %d\n", diagonal_sum);
    printf("Sum of squares in the opposite diagonal: %d\n", opposite_diagonal_sum);

    return 0;
}
