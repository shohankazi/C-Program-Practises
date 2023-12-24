#include<stdio.h>
#include<conio.h>
int main(){
    int arr[30][30], m, n,r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &arr[r][c]);
        }
    }
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            printf("%5d", arr[r][c]); // Print the current values of matrix
        }
        printf("\n");
    }
    if (m != n)
    {
        printf("It is not a diagonal matrix");
    }
    else{
        printf("Diagonal elements are: ");
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                if(r == c){
                    printf("%5d",arr[r][c]); // Print the diagonal elements of the matrix
                }
            }
            
        }
        
    }
    return 0;
}