#include<stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main()
{
    int a = 10, b = 20;
    printf("Sum: %d\n", a + b);
    printf("Product: %d\n", multiply(a, b));
    return 0;
}
