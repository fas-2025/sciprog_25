# Practical 5

This folder contains the code for practical 5.
It looks at using pointers and user input to programs as well
as loops and mathematical calculations.

The first program is a basic test for the C scanf function.
The second program displays the Fibonacci series up to a user inputted n value.
The third program program calculates the inverse hyperbolic tangent function in two ways - using a Maclurin series and using natural logarithims. It requires the user to input a 
positive delta value which repersents the precision of the Maclurin series approximate
calculation.

## Compile:

* gcc use_scanf.c -o scanfc
* gcc fibonacci.c -o fibc
* gcc arctanhc.c -o arctanhc -lm

## Execute:

* ./scanfc
* ./fibc
* ./arctanhc

## Output:

* scanfc
Enter an int and double
5 4.5

* fibc
Enter a positive integer:
20
Fibonacci sequence is:
0, 11 2 3 5 8 13 21 34
55 89 144 233 377 610 987 1597 2584 4181
6765

* arctanhc

Enter delta
0.1
Difference at -0.900000 is 0.1427933610
Difference at -0.800000 is 0.0624096220
Difference at -0.700000 is 0.0193531944
Difference at -0.600000 is 0.0211471806
Difference at -0.500000 is 0.0076394777
Difference at -0.400000 is 0.0023155969
Difference at -0.300000 is 0.0005196042
Difference at -0.200000 is 0.0000658874
Difference at -0.100000 is 0.0000020144
Difference at -0.000000 is 0.0000000000
Difference at 0.100000 is 0.0003353477
Difference at 0.200000 is 0.0000658874
Difference at 0.300000 is 0.0005196042
Difference at 0.400000 is 0.0023155969
Difference at 0.500000 is 0.0076394777
Difference at 0.600000 is 0.0211471806
Difference at 0.700000 is 0.0193531944
Difference at 0.800000 is 0.0624096220
Difference at 0.900000 is 0.1427933610
