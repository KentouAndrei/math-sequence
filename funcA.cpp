#include "FuncA.h"

// Функція обчислює суму перших n елементів нескінченної послідовності
double FuncA::calculate(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1.0 / (1 << i);
    }
    return sum;
}
