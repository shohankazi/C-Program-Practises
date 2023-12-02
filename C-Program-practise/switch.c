#include<stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    switch(letter){
        case 'A':
        printf("First letter\n");
        break;
        case 'Z':
        printf("Last letter\n");
        break;
        default:
        printf("Middle letter\n");
        break;
    }
}
