#include<stdio.h>
#include<conio.h>
void main(){
    int num, n, r,reversed_num = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    { 
        r = n % 10;
        reversed_num = reversed_num * 10 + r;
        n = n / 10;
    }
    if (reversed_num == num)
    {
        printf("%d is Palindrome", num);
    }
    else{
        printf("%d is not Palindrome", num);
    }
    
    
}