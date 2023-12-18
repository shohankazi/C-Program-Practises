#include<stdio.h>
#include<conio.h>
int main(){
    int arr[500], n, i,j,temp,s,beg,end,mid,f = 0;
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
    printf("Enter an element for search: ");
    scanf("%d", &s);
    beg = 0;
    end = n - 1;
    while (beg <= end) 
    {
        mid = (beg + end) / 2;
        if (s == arr[mid])
        {
            f = 1;
            break;
        }
        else if(s > arr[mid]){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }
    if (f == 1)
    {
        printf("Searching success");
    }
    else{
        printf("Searching is not success");
    }
    return 0;
}