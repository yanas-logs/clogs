// Example
#include <stdio.h>
#include "operations/int_ops.h"
#include "operations/float_ops.h"
#include "operations/char_ops.h"
#include "operations/string_ops.h"

int main() {
    printf("Int Add: %d\n", int_add(5, 3));
    printf("Float Divide: %.2f\n", float_divide(7.5, 2.5));
    printf("Char Upper: %c\n", char_to_upper('a'));
    
    char str[] = "hello";
    str_reverse(str);
    printf("String Reverse: %s\n", str);

    return 0;
}
