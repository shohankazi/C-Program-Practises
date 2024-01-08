#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
    int n,i,l,u;
    system("cls");
    srand(time(NULL));
    printf("Enter lower value of Random Number");
    scanf("%d",&l);
    printf("Enter upper value of Random Number");
    scanf("%d",&u);
    for(i=1;i<=5;i++)
    {
        n=(rand() %(u-l+1)) + l;
        printf("%5d",n);  
    }
    
    return 0;
}