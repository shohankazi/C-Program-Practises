// Program to check whether the number is positive or negative

/* 

#include<stdio.h>
int main(){
    int n = -23;
    n > 0 ? printf("%d is positive",n) : printf("%d is negative",n);
}

*/

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U') ? printf(" %c is vowel",ch):printf("%c is consonant",ch);
    return 0;
}