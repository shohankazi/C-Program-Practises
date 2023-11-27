#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d",&number);
    if(number % 3 == 0 && number % 5 == 0){
        printf("FizzBuzz");
    }
    else if( number % 3 == 0){
        printf("Fizz");
    }
    else if(number % 5 == 0){
        printf("Buzz");
    }
    else{
        printf("This is not divisible by both 3 and 5");
    }
    return 0;
}
