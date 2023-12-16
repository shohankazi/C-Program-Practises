#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++){
            printf("%d ",j);// to print 1, 1 2, 1 2 3, ...
            // printf("%d ",i); // to print 1, 2 2, 3 3 3, ...
            // printf("*"); // to print *, ** ,***, ****,
        }
    printf("\n");
    }
    return 0;
}