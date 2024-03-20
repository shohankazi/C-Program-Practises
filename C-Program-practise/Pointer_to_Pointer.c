#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
    int a = 10;
    int *p = &a;
    int **q = &p; 
    int ***r = &q;
    printf("a = %d %d %d\n", a,*p,*(*q),*(*(*r)));
}