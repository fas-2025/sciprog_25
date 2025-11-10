# Practical 7
This folder contains the code for practical 7.
It looks at dynamic memory allocation in C.

The first program approximates the value of e using the Taylor series expansion. It requires the n polynomial order value from the user.
The second program demonstrates some pointer and memory allocation functions in C which include allocating arrays, filling them and printing them.

## Compile:

* gcc finde.c -o finde -lm
* gcc dynamicallocation.c -o dynamicallocation

## Execute:

* ./finde
* ./dynamicallocation

## Output:

* finde
Enter the required polynomial order
1
e term for order 1 is 1.00000000000000
e is estimated as 2.0000000000, with difference -7.182818e-01

Enter the required polynomial order
5
e term for order 1 is 1.00000000000000
e term for order 2 is 0.50000000000000
e term for order 3 is 0.16666666666667
e term for order 4 is 0.04166666666667
e term for order 5 is 0.00833333333333
e is estimated as 2.7166666667, with difference -1.615162e-03

Enter the required polynomial order
10
e term for order 1 is 1.00000000000000
e term for order 2 is 0.50000000000000
e term for order 3 is 0.16666666666667
e term for order 4 is 0.04166666666667
e term for order 5 is 0.00833333333333
e term for order 6 is 0.00138888888889
e term for order 7 is 0.00019841269841
e term for order 8 is 0.00002480158730
e term for order 9 is 0.00000275573192
e term for order 10 is 0.00000027557319
e is estimated as 2.7182818011, with difference -2.731266e-08

Enter the required polynomial order
15
e term for order 1 is 1.00000000000000
e term for order 2 is 0.50000000000000
e term for order 3 is 0.16666666666667
e term for order 4 is 0.04166666666667
e term for order 5 is 0.00833333333333
e term for order 6 is 0.00138888888889
e term for order 7 is 0.00019841269841
e term for order 8 is 0.00002480158730
e term for order 9 is 0.00000275573192
e term for order 10 is 0.00000027557319
e term for order 11 is 0.00000002505211
e term for order 12 is 0.00000000208768
e term for order 13 is 0.00000000051758
e term for order 14 is 0.00000000078189
e term for order 15 is 0.00000000049892
e is estimated as 2.7182818301, with difference 1.625527e-09

As you can see with higher orders, the estimate is getting worse. This is due to the integer overflow.

* dynamicallocation
Size of the array:
3
a[0]: 1
a[1]: 1
a[2]: 1

Size of the array:
3
a[0]: 1
a[1]: 1
a[2]: 1

Size of the array:
10
a[0]: 1
a[1]: 1
a[2]: 1
a[3]: 1
a[4]: 1
a[5]: 1
a[6]: 1
a[7]: 1
a[8]: 1
a[9]: 1
