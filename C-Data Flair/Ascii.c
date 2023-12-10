#include<stdio.h>


int main(){
    int i;
    char ch;
    printf("\n character \t Ascii Values");
    for (i = 0; i <= 125; i++)
    {
        ch = i; //implicit type conversion
        printf("\n%c \t %d",ch,i);
    }
    return 0;
}