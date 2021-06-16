#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int chessBoard[8][8] = 
        {{-4,-2,-3,-5,-6,-3,-2,-4},
         { 1, 1, 1, 1, 1, 1, 1, 1},
         { 0, 0, 0, 0, 0, 0, 0, 0},
         { 0, 0, 0, 0, 0, 0, 0, 0},
         { 0, 0, 0, 0, 0, 0, 0, 0},
         { 0, 0, 0, 0, 0, 0, 0, 0},
         { 1, 1, 1, 1, 1, 1, 1, 1},
         { 4, 2, 3, 5, 6, 3, 2, 4}};

    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            printf("%2d " , chessBoard[i][j]);
        }
        printf("\n");
    }

    return 0;
}