#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c){
        printf("a = %d is the biggest number", a);
    } 
    else if (b >= c){
        printf(" b = %d is the biggest number", b);
    }
    else{
        printf(" c = %d is the biggest number", c);
    }
}