#include <stdio.h>

int main(){
    float pi,r,result;
    printf("Give me radius: ");
    scanf("%f",&r);
    pi = 3.1416;
    result = pi * r * r  ;
    printf("This is area of a circle: %f",result);
    return 0;
}

