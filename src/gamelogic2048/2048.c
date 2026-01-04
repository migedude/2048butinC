#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void spawnTile (int board[4][4]) {
    int emptyCount = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           if (board[i][j] == 0) {
            emptyCount++
           }
        }
        
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", board[i][j]); 
        }
        printf("\n");
    }
    return;


}
int board[4][4] = {{0,0,0,0},
                  {0,0,0,0},
                  {0,0,0,0},
                  {0,0,0,0}
                            };
int main() {
    printf("2048: The Beginning\n");
    printf("-------------------\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", board[i][j]); 
        }
        printf("\n");
    }
    return 0; 


}