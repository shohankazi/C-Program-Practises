#include<stdio.h>
#include<conio.h>
int main(){
    int a1[30][30],b1[30][30], m, n,r,c,add_result,subtraction_result;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the First matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    printf("Print the values of the First matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]);
    }
    printf("\n");
    }
    printf("Enter the values of the Second matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &b1[r][c]);
        }
    }
    printf("Print the values of the Second matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", b1[r][c]);
    }
    printf("\n");
    }
    printf("Addition of matrices: \n");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            add_result = a1[r][c] + b1[r][c];
            printf("%5d", add_result);
        }
        printf("\n");
    }
    
    printf("Subtraction of matrices: \n");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            subtraction_result = a1[r][c] - b1[r][c];
            printf("%5d", subtraction_result);
        }
        printf("\n");
    }
    return 0;
}