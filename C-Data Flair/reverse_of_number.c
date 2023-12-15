#include<stdio.h>
#include<conio.h>
void main(){
    int n, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    printf("Reverse is %d", s);
}