#include <stdio.h>

int main(){
    int x = 0x0003E000, y = 0x00000001, z = 0x00000000;
    z = (z & 0xFFFFFF00) | (((x & 0x0003E000) >> 13) | ((y & 0x00000007) << 5));
    printf("Size of int: %d", z);
    return 0;
}