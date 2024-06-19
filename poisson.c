// POISSON 
#include <stdio.h>
#include <math.h>

#define N 3  

 
double f(int x, int y) {
    return 2 * pow(x, 2) * pow(y, 2);
}

int main() {
    double phi[N+1][N+1] = {0};  
    double new_phi[N+1][N+1];  
    double error, maxError;
    int iterations = 0, maxIterations = 10000;

   
    do {
        maxError = 0;
        for (int i = 1; i < N; i++) {  
            for (int j = 1; j < N; j++) {  
                 
                new_phi[i][j] = 0.25 * (phi[i+1][j] + phi[i-1][j] + phi[i][j+1] + phi[i][j-1] - f(i, j));
                
               
                error = fabs(new_phi[i][j] - phi[i][j]);
                if (error > maxError) {
                    maxError = error;
                }
            }
        }

    
        for (int i = 1; i < N; i++) {
            for (int j = 1; j < N; j++) {
                phi[i][j] = new_phi[i][j];
            }
        }

        iterations++;
    } while (maxError > 1e-5 && iterations < maxIterations);

   
    printf("Solution after %d iterations:\n", iterations);
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            printf("%.2f\t", phi[i][j]);
        }
        printf("\n");
    }

    return 0;
}