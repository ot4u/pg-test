#include "quadratic_equation.h"

void test_solve_equation() {
    printf("Тестирование solve_equation...\n\n");

    // case 1: 2 корня
    QuadraticSolution solution1 = solve_equation(1, -3, 2);
    printf("кейс 1\nкорни: %lf, %lf\n\n", solution1.root1, solution1.root2);

    // case 2: 1 корень
    QuadraticSolution solution2 = solve_equation(1, -2, 1);
    printf("кейс 2\nкорни: %lf, %lf\n\n", solution2.root1, solution2.root2);

    // case 3: нет корней
    QuadraticSolution solution3 = solve_equation(1, 2, 3);
    printf("кейс 3\nкорни: %lf, %lf\n\n", solution3.root1, solution3.root2);
}

int main() {
    test_solve_equation();
    return 0;
}
