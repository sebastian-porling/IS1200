#include <stdio.h>

// Function that adds two values from two pointers.
void adder(const int *x, const int *y, int *z){
    *z = *x + *y;
}

// Function that takes in a value and calls adder to add the constant
// "k" to it.
int foo(int a){
    const int k = 10;
    int z = 0;
    adder(&a, &k, &z);
    return z;
}

// Calls foo function and prints the result
int main(){
    int r = foo(7);
    printf("Result: %d", r);
    return 0;
}