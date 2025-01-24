#include <stdio.h>

int main() {
    int n, i, j;

    // Prompting for number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    int A[n][n];

    // Prompting for matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // Rotate the matrix 90 degrees clockwise
    for (i = 0; i < n; i++) {
        int j = 0;
        int k = n - 1;
        while (j < k) {
            // Swap A[i][j] and A[i][k]
            int temp = A[i][j];
            A[i][j] = A[i][k];
            A[i][k] = temp;
            j++;
            k--;
        }
    }

    // Output the rotated matrix
    printf("\nRotated matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
