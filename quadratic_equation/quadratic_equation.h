#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <math.h>
#include <stdio.h>

typedef struct {
    int num_roots;
    double root1;
    double root2;
} QuadraticSolution;

QuadraticSolution solve_equation(double a, double b, double c);

#endif
