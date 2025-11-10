// Scientific Programming Concepts - 2025
// Practical 7
// This program contains functions for the allocation, filling and printing
// of a dynamically allocated array. It requires the user to input the size
// of the array.

#include<stdio.h>
#include<stdlib.h>

// Allocate Array
int *allocatearray(int n){
	int *p;
	p = (int *) malloc(n*sizeof(int));
	return p;
}

// Fill with ones
void fillwithones(int *array, int n){
	for(int i=0; i<n; i++){
		array[i] = 1;
	}
}

// Print the array
void printarray(int *array, int n){
	for(int i=0; i<n; i++){
		printf("a[%d]: %d\n", i, array[i]);
	}
}

// Deallocate the array
void freearray(int *array){
	free(array);
}

int main(){
	// Variables
	int n, *a;

	// Request from user.
	printf("Size of the array: \n");
	scanf("%d", &n);

	// Using functions.
	a = allocatearray(n);
	fillwithones(a, n);
	printarray(a, n);
	freearray(a);

	a=NULL;

	return 0;
}
