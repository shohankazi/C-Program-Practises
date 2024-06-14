#include <stdio.h>
int main(){
    int n , i, large = 0, ele;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 1; i < n; i++){
        scanf("%d", &ele);
        if(ele > large){
            large = ele;
        }
    }
printf("\n %d is large", large);
}