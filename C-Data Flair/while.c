#include<stdio.h>
#include<conio.h>
void main(){
    int i, n,m;
    unsigned long long f = 1;
    //FACTORIAL OF A NUMBER
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    while ( n != 0)
    {
        f = f * n;
        n--;
    }
    printf("Factorial of %d is %llu\n",m,f); // this format specifier used for show without negative value.
    
}


// while (i >= 1)
    // {
    //     printf("%d ", i);
    //     i--;
    // }
    // while (i)
    // {
    //     printf("%d ", i);
    //     i++;
    // }
    