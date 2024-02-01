//FIBONACCI SERIES USING TAIL RECURSION
// 0 1 1 2 3 5 8 13 21 34 55 89 143

#include <stdio.h>

// Tail-recursive function to compute Fibonacci
int fibonacciTailRec(int n, int a, int b) {
    if (n == 0) {
        return a;
    }
    if (n == 1) {
        return b;
    }
    
    return fibonacciTailRec(n - 1, b, a + b);
}

// Wrapper function to start the tail recursion
int fibonacci(int n) {
    return fibonacciTailRec(n, 0, 1);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}
