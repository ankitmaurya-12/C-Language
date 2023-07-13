#include <stdio.h>

void multiplyByTen(int *num) {
    *num = (*num) * 10;
}

int main() {
    int x = 5;
    printf("Current value of x: %d\n", x);
    multiplyByTen(&x);
    printf("New value of x: %d\n", x);
    return 0;
}
