#include <stdio.h>

void adder(const int *x, const int *y, int *z){
    *z = *x + *y;
}
int foo(int a){
    const int k = 10;
    int z = 0;
    adder(&a, &k, &z);
    return z;
}
int main(){
    int r = foo(7);
    printf("Result: %d", r);
    return 0;
}