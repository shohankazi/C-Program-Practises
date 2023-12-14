
// Menu Driven Application using C
#include<stdio.h>
#include<conio.h>
int main(){
    int a, b, c, choice;
    printf("\n============ MENU ============");
    printf("\n1. Addition 2. Swap 3. Max");
    printf("\n==============================");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter 2 numbers to add: ");
        scanf("%d %d",&a,&b);
        c = a + b;
        printf("Addition is %d",c);
    }    
        break;
    case 2:{
        printf("Enter 2 numbers to swap: ");
        scanf("%d %d",&a,&b);
        c = a;
        a = b;
        b = c;
        printf("Swapping is %d %d",a,b);
    }
    break;
    case 3:{
        printf("Enter 2 number to check the maximum: ");
        scanf("%d %d",&a,&b);
        if (a > b) 
        {
            printf("Maximum is %d",a);
        }
        else{
            printf("Maximum is %d",b);
        }
    }
    break;
    default:
        printf("Invalid choice");
        break;
    }
}