#include "quadratic_equation.h"

void test_solve_equation() {
    printf("Тестирование solve_equation...\n\n");

    // case 1: 2 корня
    QuadraticSolution solution1 = solve_equation(1, -3, 2);
    printf("кейс 1\nколичество корней: %d\nкорни: %lf, %lf\n\n", solution1.num_roots, solution1.root1, solution1.root2);

    // case 2: 1 корень
    QuadraticSolution solution2 = solve_equation(1, -2, 1);
    printf("кейс 2\nколичество корней: %d\nкорень: %lf\n\n", solution2.num_roots, solution1.root1);

    // case 3: нет корней
    QuadraticSolution solution3 = solve_equation(1, 2, 3);
    if (solution3.num_roots == 0) {
        printf("кейс 3\nкорней нет");
    }
}

int main() {
    test_solve_equation();
    return 0;
}
