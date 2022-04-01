The Heron sequence is defined by:  with .
Write a function that returns the Heron sequence until having convergence with an error less or equal to .
Prototype: t_cell *heron(double p, double x0);
You must use linked lists.

The Fibonacci sequence is defined by:  is valid for  with .
Code the Fibonacci sequence until having a geometric behavior. How can we deduce the gold number ?
Prototypes: t_cell *Fibonnaci(); double gold_number(t_cell *head);
You must use linked lists.
You can use the library <math.h> in your code

The Mandelbrot’s set is the set of complex numbers c for which the function  does not diverge when iterated from .
If we assume that the sequence  diverges if it becomes greater then 2. Code the Mandelbrot’s set in a PGM file mandelbrot.pgm with a recurrent sequence:  where the width = 1000 pixels, the hight = 1000 pixels and the maximum of iterations = 255.

Code the Julia’s Set in a PGM file with a recurrent sequence:  and output the results into 6 PGM files for each of the following c complex numbers:
c= -0.625 + 0.4i refers to the file julia1.pgm
c= 0.285 + 0i refers to the file julia2.pgm
c= 0.285 + 0.01i refers to the file julia3.pgm
c= -0.7269 + 0.1889i refers to the file julia4.pgm
c= -0.835 + 0.2321i refers to the file julia5.pgm
c= -0.70176 - 0.3842i refers to the file julia6.pgm

