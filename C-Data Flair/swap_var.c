// Swapping using third variable
#include<stdio.h>
#include<conio.h>

void main(){
    int a, b,c;
    printf("Enter two number");
    scanf("%d %d", &a, &b);
    printf("Before swapping %d %d",a,b);
    c = a;
    a = b;
    b = c;
    printf("After swapping %d %d",a,b);
}