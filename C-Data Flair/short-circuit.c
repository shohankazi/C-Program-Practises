#include<stdio.h>
int main(){
    int a, b, c;
    a = 10;
    b = 5;
    c = ++a > 5|| ++b > 10; // Value will be 11 and will not check after if one of the values is true
    printf("%d %d %d\n", a, b, c);
}