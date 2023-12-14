#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1 :
        printf("One");
        break;
    case 2 :
        printf("Two");
        break;
    case 3 :
        printf("Three");
        break;
    case 4 :
        printf("Four");
        break;
    default:
        printf("Invalid number");
        break;
    }
}