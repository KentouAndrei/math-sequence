#include "FuncA.h"


double FuncA::calculate() {
    return 1 + 0.5 + 0.25;  // Повертає суму перших 3 елементів
// Функція обчислює суму перших n елементів нескінченної послідовності
double FuncA::calculate(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1.0 / (1 << i);
    }
    return sum;

}

