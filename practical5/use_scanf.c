// Scientific Programming Concepts - 2025
// Practical 5
// Scanf usage
#include <stdio.h>

int main(void) {
	int i; 
	double a;
	int ierr;

	// Request information from user
	printf("Enter an int and double\n");
	ierr = scanf("%d %lf",&i,&a);

	if(ierr != 2) printf("Problem with the input");

	return 0;
}


