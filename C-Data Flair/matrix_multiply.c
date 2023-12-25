#include<stdio.h>
#include<conio.h>
int main(){
    int a1[30][30],b1[30][30],c1[30][30], m, n,r,c,k;
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
    printf("Resultant of matrices: \n");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            c1[r][c] = 0;
        }
    }
    // Here are 3 nested loops
    for (r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            for(k = 0; k < m; k++){
                c1[r][c] = c1[r][c] + (a1[r][k] * b1[k][c]); // This is the main logic for multiplication of two matrices
            }
        }
    }
    // Show the resultant
    for(r = 0; r < m; r++){
        for(c = 0;c < n; c++){
            printf("%5d ",c1[r][c]);
        }
        printf("\n");
    }
    return 0;
}