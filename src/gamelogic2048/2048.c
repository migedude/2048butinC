#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int emptyTileChecker(int board[4][4]){
    int emptyCount = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           if (board[i][j] == 0) {
            emptyCount++;
           }
        }
        
    }
    return emptyCount;
}

int tileSelector(){
    if (rand() % 11 < 9) {
        return 2;
    } else {
        return 4;
    }
}
void tilePlacer(int board[4][4], int targetValue){
    /*
    My thought process is that we have to count all the values that are empty and once we 
    have x amout of empty valeus that is equal to our x amout of random variables then we can add the
    value there
    
    */
   int emptyCount = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           if (board[i][j] == 0) {
            if (emptyCount == targetValue) {
                board[i][j] = tileSelector();
                return;
            }
     emptyCount++;
        }
        
        }
    }
}

void spawnTile (int board[4][4]) {
    int emptySpots = emptyTileChecker(board);
    if (emptySpots == 0) {
        printf("Game OVER!!!!");
    }
    printf("Number of empty titles is: %i\n", emptyTileChecker(board));

    int randomPlacementvalue = rand() % emptySpots ;
    tilePlacer(board, randomPlacementvalue);
   
}
int board[4][4] = {{0,0,0,0},
                  {0,0,0,0},
                  {0,0,0,0},
                  {0,0,0,0}
                            };

void printBoard(int board[4][4]){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", board[i][j]); 
        }
        printf("\n");
    }


}
int main() {
    srand(time(NULL));
    spawnTile(board);
    printf("2048: The Beginning\n");
    printf("-------------------\n");
    printBoard(board);
    
    while (1) {
        char input;
        scanf(" %c", &input);
        printf("%c\n", input);
        if (input == 'q' || input == 'Q') {
            break;
        } else if (input == 'r' || input == 'R') {
            spawnTile(board);
            printBoard(board);
        }


    }
    




    return 0; 
}