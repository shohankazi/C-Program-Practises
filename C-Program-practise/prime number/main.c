#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Number please: ");
    scanf("%d",&n);
    if(n / n == 1 && n / 1 == n){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",&n);
    }
    return 0;
}
