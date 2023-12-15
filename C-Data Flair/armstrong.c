
// Armstrong number = A number who's sum of cube of individual digit is equal to original number
#include<stdio.h>
#include<conio.h>
void main(){
    int n, r, s = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    while (n!=0)
    {
        r = n % 10;
        s = s + (r * r * r); // Here is the main logic
        n = n / 10;
    }
    if (m == s)
    {
        printf("%d is Armstrong\n", m);
    }
    else{
        printf("%d is not Armstrong\n", m);
    }
}