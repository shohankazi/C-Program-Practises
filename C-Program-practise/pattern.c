// #include<stdio.h>

// const int ROWS = 3;
// const int COLS = 5;

// for(int row = 0; row <= ROWS; ++row){
//     for(int col = 0; col <= COLS; ++col){
//         printf("* ");
//     }
//     printf("\n");
// }

#include<stdio.h>

const int ROWS = 3;
const int COLS = 5;
int main(){
for(int row = 0; row < ROWS; ++row){
    for(int col = 0; col < COLS; ++col){
        printf("* ");
    }
    printf("\n");
}
}