#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before Call %d %d %d \n",a,b,c);
    fun1(&a,&b,&c);
    printf("After Call %d %d %d \n",a,b,c);
}

fun1(i,j,k)
    int *i,*j,*k;
    {
       *i = 21; *j = 22; *k = 23;
       printf("Inside fun1 %d %d %d \n",*i,*j,*k);
    }

