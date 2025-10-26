// Scientific Programming Concepts - 2025
// Practical 5
// Inverse Hyperbolic Tangent Exercise

#include <stdio.h>
#include <math.h>

// Function Prototypes
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){
	
	double delta, x;
	printf("Enter delta\n"); // getting input from user
	scanf("%lf", &delta);

	int length = 1000;
	double tan1[length];
	double tan2[length];

	x = -0.9;
	int j = 0; // array index
	while(x<=0.9 && j<length){
		tan1[j] = arctanh1(x, delta);
		tan2[j] = arctanh2(x);
		printf("Difference at %lf is %.10lf\n", x, fabs(tan1[j]-tan2[j]));
		
		j++;
		x = x+0.1;
	}
		
	return 0;
}

// Inverse hyperbolic tangent approximation function
double arctanh1(const double x, const double delta){
	double arcTan = 0; // approximated
	double elem, val;
	int n = 0;

	do{
		val = 2*n+1;
		elem = pow(x, val)/val;
		arcTan += elem;
	        n++;	
	} while(fabs(elem) >= delta);

	return arcTan;
}

// Inverse hyperbolic tangent real function
double arctanh2(const double x){
	return ((log(1+x)-log(1-x))/2);
}

