//Program for structure
#include<stdio.h>
#include<string.h>
struct Student
{
    int rno;
    char name[50];
    double per;
};
struct Student S;
void main(){
    printf("\nEnter name: ");
    scanf("%s",&S.name);
    fflush(0);
    printf("Enter Roll Number: ");
    scanf("%d", &S.rno);
    printf("Enter Percentage: ");
    scanf("%lf",&S.per);
    printf("\n[----Student Information----]\n");
    printf("\nName: %s",S.name);
    printf("\nRoll Number: %d",S.rno);
    printf("\nPercentage: %.2lf",S.per);
}
