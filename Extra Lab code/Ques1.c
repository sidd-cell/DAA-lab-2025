#include <stdio.h>
#define N 3  

void rotate90Clockwise(int matrix[N][N]) {
    int i, j;

     for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - 1 - j];
            matrix[i][N - 1 - j] = temp;
        }
    }
}

void printMatrix(int matrix[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotate90Clockwise(matrix);

    printf("\nRotated Matrix (90 degree clockwise):\n");
    printMatrix(matrix);

    return 0;
}
