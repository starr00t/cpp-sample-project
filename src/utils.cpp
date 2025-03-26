#include "utils.h"
#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}