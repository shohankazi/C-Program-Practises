#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b) && (a>c)){
       printf("\nlargest is %d",a);
       }
    else if(b>c){
        printf("\nlargest is %d",b);
    }
    else{
        printf("\nlargest is %d",c);
    }
    return 0;
}
