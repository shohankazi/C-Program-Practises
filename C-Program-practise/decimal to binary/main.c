#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, decimal_num,remainder,base = 1, binary = 0;
    printf("Enter a decimal integer\n");
    scanf("%d",&num);
    decimal_num = num;
    while(num > 0){
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num/2;
        base = base * 10;
    }
    printf("Input number is = %d \n",decimal_num);
    printf("It's binary equivalent = %d \n",binary);
    return 0;
}
