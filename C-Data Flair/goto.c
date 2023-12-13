#include<stdio.h>
#include<conio.h>
int main(){
    int h, m, e, c, total, percent;
    printf("Enter marks of hindi: ");
    //For HINDI
    hindi: scanf("%d", &h);
    if (h > 100)
    {
        printf("Invalid marks Enter right number", h);
        goto hindi;
    }
    //For math
    printf("Enter marks of math: ");
    math: scanf("%d", &m);
    if (m > 100)
    {
        printf("Invalid marks Enter right number", m);
        goto math;
    }
    //For English
    printf("Enter marks of english: ");
    english: scanf("%d", &e);
    if (e > 100)
    {
        printf("Invalid marks Enter right number", e);
        goto english;
    }
    //For CS
    printf("Enter marks of CS: ");
    c_s: scanf("%d", &c);
    if (c > 100)
    {
        printf("Invalid marks Enter right number", c);
        goto c_s;
    }
    total = h + e + m + c;
    percent = total / 4;
    printf("Total is %d and percentage is %d", total, percent);
}