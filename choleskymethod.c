#include <stdio.h>
#include <math.h>

#define N 3

void choleskyDecomposition(float A[][N], float L[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            float sum = 0;
            if (j == i) {
                for (int k = 0; k < j; k++) {
                    sum += pow(L[j][k], 2);
                }
                L[j][j] = sqrt(A[j][j] - sum);
            } else {
                for (int k = 0; k < j; k++) {
                    sum += L[i][k] * L[j][k];
                }
                L[i][j] = (A[i][j] - sum) / L[j][j];
            }
        }
    }
}
void transpose(float mat[][N], float transposed[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposed[i][j] = mat[j][i];
        }
    }
}

void printMatrix(float mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float A[N][N] = {{4, 1, 1},
                     {1, 5, 2},
                     {1, 2, 3}};
    float L[N][N] = {0};

    choleskyDecomposition(A, L);

    printf("Cholesky Decomposition of A:\n");
    printMatrix(L);

    float LT[N][N] = {0}; // Transposed matrix
    transpose(L, LT);

    printf("\nTranspose of the Cholesky Decomposition:\n");
    printMatrix(LT);
 return 0;
}