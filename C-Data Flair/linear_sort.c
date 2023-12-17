#include<stdio.h>
#include<conio.h>
int main(){
    int arr[500], n, i,j,temp;
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
    for ( i = 0; i < n; i++)
    {
        for ( j = i +1; j < n; j++)
        {
            if (arr[j]< arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("Sorted elements of Array: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}