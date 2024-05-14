#include "quadratic_equation.h"

QuadraticSolution solve_equation(double a, double b, double c) {
    QuadraticSolution solution;
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        solution.num_roots = 2;
        solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        solution.num_roots = 1;
        solution.root1 = -b / (2 * a);
        solution.root2 = solution.root1;
    } else {
        solution.num_roots = 0;
    }

    return solution;
}