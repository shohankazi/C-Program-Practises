// Print pyramid like this:
/*
    A
    A B
    A B C
    A B C D
*/
/*
#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, n;
    char ch;
    
    
    printf("Enter th limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for ( j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    
}
*/

// Print pyramid like this: 
// 5 4 3 2 1
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5

#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
            // printf("* ");
        }
    printf("\n");
    }
}