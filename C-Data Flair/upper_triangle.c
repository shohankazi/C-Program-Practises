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
        printf("Upper Triangle: \n");
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                if(r <= c){
                    printf("%5d",arr[r][c]); // Print the lower triangle of the matrix
                }
                else{
                    printf("     ");
                }

            }
            printf("\n");
            
        }
        
    }
    return 0;
}



// #include<stdio.h>

// int main() {
//     int arr[10][10];
//     int m, n, r, c;

//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &m, &n);

//     printf("Enter the values of the matrix: ");
//     for (r = 0; r < m; r++) {
//         for (c = 0; c < n; c++) {
//             scanf("%d", &arr[r][c]);
//         }
//     }

//     printf("Matrix:\n");
//     for (r = 0; r < m; r++) {
//         for (c = 0; c < n; c++) {
//             printf("%5d", arr[r][c]); // Print the current values of the matrix
//         }
//         printf("\n");
//     }

//     if (m != n) {
//         printf("It is not a square matrix");
//     } else {
//         int isDiagonal = 1; // Assume it is diagonal unless a non-diagonal element is found
//         for (r = 0; r < m; r++) {
//             for (c = 0; c < n; c++) {
//                 if (r != c && arr[r][c] != 0) {
//                     isDiagonal = 0; // If a non-diagonal element is found, set the flag to 0
//                     break;
//                 }
//             }
//             if (!isDiagonal) {
//                 break;
//             }
//         }

//         if (isDiagonal) {
//             printf("It is a diagonal matrix\n");
//             printf("Upper Triangle (from right side):\n");
//             for (r = 0; r < m; r++) {
//                 for (c = 0; c < n; c++) {
//                     if (c >= r) {
//                         printf("%5d", arr[r][c]); // Print the upper triangle from the right side
//                     } else {
//                         printf("     "); // Print spaces for elements not in the upper triangle
//                     }
//                 }
//                 printf("\n");
//             }
//         } else {
//             printf("It is not a diagonal matrix\n");
//         }
//     }

//     return 0;
// }
