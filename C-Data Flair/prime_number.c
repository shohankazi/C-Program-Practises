#include<stdio.h>
#include<conio.h>
void main(){
    int n,i = 2, f = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i < n- 1)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
        i++;
        
    }
    if (f == 0)
    {
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    
    
}