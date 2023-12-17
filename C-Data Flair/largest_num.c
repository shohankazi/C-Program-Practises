#include<stdio.h>
#include<conio.h>
int main(){
    int arr[500], n, i, sum, max,p;
    limit: printf("Enter your limit: ");
    scanf("%d", &n);
    if (n > 500){
        printf("\nInvalid limit. Please enter in between 1 to 500.\n");
        goto limit;
    }
    printf("\nEnter elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("\n%d", &arr[i]);
        
    }
    max = arr[0];
    p = 0;
    for ( i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            p = i;
        }
        
    }
    printf("Largest element is %d and position is %d\n", max, (p+1));
}