#include<stdio.h>
int main(){
    int a = 5, b, c;
    b = a++;
    c = --b;
    a = c++;
    b = a--;
    printf("%d %d %d", a, b, c);
}