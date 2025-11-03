// Scientific Programming Concepts - 2025
// Practical 6
// File that contains definition of the matmult function which multiplies two matrices


// Matrix Multiplication C = A*B
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
	int i, j, k;

	// Perform Matrix Multiplication
	for(i=0; i<n; i++){ // row loop
		for(j=0; j<q; j++){ // column loop
			for(k=0; k<p; k++){ // determining C
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
}
