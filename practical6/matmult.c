// Scientific Programming Concepts - 2025
// Practical 6
// This program multiplies two matrices.

#include <stdio.h>

int main(){

	// Variables
	int n = 5, p = 3, q = 4;
	double A[n][p], B[p][q], C[n][q];
	int i, j, k; // Loop indices.

	// Initialize A, B, C matrices.
	// A Matrix
	for(i = 0; i<n; i++){ // iterate through rows
		for(j=0; j<p; j++){ // iterate through columns
			A[i][j] = i+j;
		}
	}

	// B Matrix
        for(i = 0; i<p; i++){ // iterate through rows
                for(j=0; j<q; j++){ // iterate through columns
                        B[i][j] = i-j;
                }
        }

        // C Matrix
        for(i = 0; i<n; i++){ // iterate through rows
                for(j=0; j<q; j++){ // iterate through columns
                        C[i][j] = 0.0;
                }
        }

	// Perform Matrix Multiplication
	for(i=0; i<n; i++){ // row loop
		for(j=0; j<q; j++){ // column loop
			for(k=0; k<p; k++){ // determining C
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}

	// Print Matrices
	// Matrix A
	printf("\n This is matrix A\n\n");
	for (i=0; i<n; i++){
		for(j=0; j<p; j++){
			printf("%3.0f", A[i][j]);
		}
		printf("\n");
	}
	// Matrix B
        printf("\n This is matrix B\n\n");
        for (i=0; i<p; i++){
                for(j=0; j<q; j++){
                        printf("%3.0f", B[i][j]);
                }
                printf("\n");
        }
	// Matrix C
        printf("\n This is matrix C\n\n");
        for (i=0; i<n; i++){
                for(j=0; j<q; j++){
                        printf("%3.0f", C[i][j]);
                }
                printf("\n");
        }


	return 0;
}
