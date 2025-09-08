#include "int_ops.h"

int int_add(int a, int b) {
    return a + b;
}

int int_subtract(int a, int b) {
    return a - b;
}

int int_multiply(int a, int b) {
    return a * b;
}

int int_divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}
