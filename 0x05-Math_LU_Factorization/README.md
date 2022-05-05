#0x05. Math - LU Factorization

* 0. LU
Write a function lu(A), which factors a matrix A as the product of a lower triangular matrix and an upper triangular matrix (A=LU) using the LU algorithm.

A should be a square matrix.
You must return a lower triangular unital matrix: L.
You must return an upper triangular matrix: U.

* 1. PLU
Write a function plu(A), which will make use of LUP decomposition with partial pivoting to decompose the matrix A into PA = LU. Also, decompose A as A = PLU.

A should be a square matrix.
You must return a permutation matrix: P.
You must return a lower triangular unital matrix: L.
You must return an upper triangular matrix: U.

* 2. Determinant
Adapt the PLU algorithm in order to calculate the determinant of square matrix A. In this order, write a function determinant(A) that takes a square matrix A and return its determinant.

A should be a square matrix.
You must return a float contains only two decimals.

* 3. Gradient
Write a function gradient that takes as argument a matrix A, a vector b, a tolerance tol and a number max of epochs and that returns the solution of the linear system A.T A x = b where A.T is the transpose of the matrix A.

Prototype: def gradient(A, b, tol, epoch_max)

A should be a square matrix (n, n).
b should be a vector (n).
tol should be a tiny number (in our case we will test with tol = 10^(-2)).
epochmax is the number max of epochs (in our case we will test with case epochmax = 50000).
You must return a vector.