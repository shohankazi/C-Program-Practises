#include<stdio.h>
int main(){
    float base,height,result;
    printf("give me your base: ");
    scanf("%f",&base);
    printf("give me your height: ");
    scanf("%f",&height);
    result = (base * height) / 2;
    printf("This is the area of a triangle %f",result);
    return 0;

}
