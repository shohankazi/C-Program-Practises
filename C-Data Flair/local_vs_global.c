#include<stdio.h>
#include<conio.h>
void xyz();
void abc();
int a = 30;
void main() {
    int a = 100;
    a = a + 10;
    xyz();
    printf("\n Local Main: %d", a);
    }
void xyz(){
        a = a + 10;
        abc();
        printf("\nGlobal Value: %d", a);
        a = a + 50;
    }
    void abc(){
        int a = 80;
        a = a + 20;
        printf("\nLocal abc value: %d", a);
        a = a + 10;
    }

    // This program is executed in stack format. LIFO = Last in first out.
    // First of all abc() is executed
    // Then Global value executed;
    // Then Local main is executed 