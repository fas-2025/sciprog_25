// Scientific Programming Concepts - 2025
// Practical 4

#include <stdio.h>
#include <math.h>

// Constants
#define N 12

// Global Variables
float TanArr[N+1];

// Function Prototypes
float degtorad(float arg);
float traprule();

int main(){

	int i;
	float deg, rad, area;

	// Determine f(x1) at x_i for i=0, 1, ..., 12;
	for(i = 0; i<=N; i++){
		deg = i*5.0;
		rad = degtorad(deg);
		TanArr[i] = tan(rad);
		printf("TanArr[%d]=%f\n", i, TanArr[i]);
	}
	
	// Calculating area using trapezoidal rule.
	area = traprule();

	// Approximated result
	printf("\n Trapezodial Results: %f\n", area);
	// Actual  Result
	printf("Real Result: %f\n", log(2.0));

	return 0;
}

// Function to convert from degrees to radians.
float degtorad(float arg){
	return ((M_PI*arg)/180.0);
}

// Function to use trapezodial rule.
float traprule(){
	float area;
	int i;

	area = TanArr[0] + TanArr[N]; // first and last element 
	for(i = 1; i<N; i++){ // loop to iterate over other points
		area = area + 2.0*TanArr[i];
	}

	float mult_rad = degtorad((60.0-0.0)/(2*N));
	area = mult_rad*area;

	return area;
}
