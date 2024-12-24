#include<stdio.h>

void addition(int *a, int *b, int *c) {
    *c = *a + *b;
}

int main() {
    int a = 10, b = 25, c;
    addition(&a, &b, &c);
    printf("Result: %d\n", c); // Print the result
}
