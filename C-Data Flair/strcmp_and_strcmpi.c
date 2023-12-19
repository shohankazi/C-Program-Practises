#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int compare;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    //compare = strcmp(s1,s2);// String comparison with strcmp() function
    compare = strcmpi(s1,s2);// String comparison with strcmpi() function
    if (compare == 0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    return 0;
}