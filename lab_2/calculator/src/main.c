#include <stdio.h>
#include "calculator.h"

int main() {
    int a = 5, b = 3;
    printf("Addition: %d\n", add(a, b));         // Виклик функції add
    printf("Subtraction: %d\n", subtract(a, b)); // Виклик функції subtract
    return 0;
}
