#include<stdio.h>
int main(){
    int a,i,sum;
    a = 5;
    sum = 0;
    for ( i = 1; i <= 5; i++)
    {
        // printf("%d\n",i);
        sum = sum + i;
        printf("%d\n",sum);
    }
    return 0;
}