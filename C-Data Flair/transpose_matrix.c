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
    printf("Before Transpose: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", arr[r][c]);
    }
    printf("\n");
    }
    printf("After Transpose: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", arr[c][r]);
        }
        printf("\n");
    }

    return 0;
}