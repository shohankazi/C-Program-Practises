#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c,d,e;
    a = 2 & 5; // Bitwise AND
    b = -2 | 3; // Bitwise OR
    c = ~4; //Bitwise NOT
    d = 3 << 4; //Left shift operation
    e = 4 << 5; //Right shift operation
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}