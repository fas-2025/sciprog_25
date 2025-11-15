// Practical 8
// Scientific Programming Concepts - 2025
// Description: Iterative and recursive versions of Euclid's algorithim
// to calculate the gcd of two positive integers

#include<stdio.h>

// Iterative function for greatest common divisor.
int iterativeGCD(int a, int b){
	int temp;
	while (b!=0){
		temp = b;
		b=a%b;
		a=temp;
	}

	return a;
}

// Recursive function for greatest common divisor.
int recursiveGCD(int a, int b){
	if(b==0){
		return a;
	}
	else return recursiveGCD(b, a%b);

}

int main(){
	// Variables
	int a, b, error;

	// Getting input from user and error checking.
	printf("Please input two positive integers:\n");
	error=scanf("%d %d", &a, &b);
	if(error != 2){ // error checking
		printf("Please enter two integers.\n");
		return 1;
	}
	if(a<=0 || b<=0){
		printf("These numbers are not positive!\n");
		return 1;
	}

	// Call the functions
	printf("Iterative GCD(%d, %d) = %d\n", a, b, iterativeGCD(a,b));
	printf("Recursive GCD(%d, %d) = %d\n", a, b, recursiveGCD(a,b));

	return 0;
}
