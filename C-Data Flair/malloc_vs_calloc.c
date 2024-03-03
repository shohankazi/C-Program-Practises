#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ar, n, i;
    // printf("%d",sizeof(int));
    // scanf("%d",&n);
    printf("Enter the limit: ");
    scanf("%d",&n);
    // ar = (int*)malloc(n*sizeof(int)); // allocated with malloc
    ar = (int *)calloc(sizeof(int), n); // allocated with calloc
    printf("Enter elements in array: ");
    for ( i = 0; i < n; i++){
    scanf("%d",&ar[i]);
    }
    for( i = 0; i < n; i++){
    printf("%d",ar[i]);
    }
    free(ar);
}