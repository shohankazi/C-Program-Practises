// Linear Search Program
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[500],i,n,s,f = 0;
    limit: printf("Enter your limit: ");
    scanf("%d",&n);
    if (n > 500)
    {
        goto limit;
    }
    printf("Enter your numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter number to search: ");
    scanf("%d", &s);
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            f = 1;
            break;
        }
    }    
    if ( f == 1 )
    {
        printf("%d found", s);
    }
    else{
        printf("%d not found", s);
    }
    
    
    
    
}