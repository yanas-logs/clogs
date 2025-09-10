#include "float_ops.h"

float float_add(float a, float b) {
    return a + b;
}

float float_subtract(float a, float b) {
    return a - b;
}

float float_multiply(float a, float b) {
    return a * b;
}

float float_divide(float a, float b) {
    if (b == 0.0f) return 0.0f;
    return a / b;
}
