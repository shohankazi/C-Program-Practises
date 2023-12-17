#include<stdio.h>
#include<conio.h>
int main(){
    int arr[500], i, n, min, p;
    limit : printf("Enter limit: ");
    scanf("%d",&n);
    if (n > 500)
    {
        goto limit;
    }

    printf("Enter your numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    p = 0;
    min = arr[i];
    for ( i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            p = i;
        }
        
    }
    printf("Minimum value is %d and position is %d\n", min,(p+1));
}