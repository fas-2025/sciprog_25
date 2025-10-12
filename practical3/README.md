# Practical 3

This folder contains the code for practical 3. The first one is a simple example of using printf.
The second one uses the trapezoidal rule to approximate the area under a curve.

## Compile:

* gcc -o printf use_printf.c
* gcc -o Trap Trap.c -lm

## Execute:

* ./printf
* ./Trap

## Output:

* printf

Two ints 10 200 and two floats 1.1100 2.2222

* Trap:

pi/3 in radians=1.047198
Initial Area: f(x0) + f(x12) = 1.732051
New area at x(1) = 1.907028
New area at x(2) = 2.259682
New area at x(3) = 2.795581
New area at x(4) = 3.523521
New area at x(5) = 4.456137
New area at x(6) = 5.610837
New area at x(7) = 7.011252
New area at x(8) = 8.689451
New area at x(9) = 10.689451
New area at x(10) = 13.072958
New area at x(11) = 15.929254

Trapezodial Result: 0.695045
Real Result: 0.693147