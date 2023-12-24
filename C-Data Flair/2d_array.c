#include<stdio.h>
#include<conio.h>
int main(){
    int a[3][3], r, c;
    printf("Enter elements in matrix: ");
    //For loop for entering elements
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c< 3; c++)
        {
            scanf("%d", &a[r][c]);
        }
        
    }
    //For loop for printing elements
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%5d ", a[r][c]);
        }
        printf("\n");
    }
    
}