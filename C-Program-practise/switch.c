#include<stdio.h>
#include<conio.h>
int main(){
    char letter;
    //scanf("%c",&letter);

    switch(letter=toupper(getchar())){
        case 'R':
        printf("RED");
        break;
        case 'G':
        printf("GREEN");
        break;
        case 'B':
            printf("BLUE");
            break;
        default:
        printf("Invalid Choice\n");
        break;
    }
}
