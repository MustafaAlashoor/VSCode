#include<stdio.h>

int main() {
    int grid[9][9] = {0};
    
    
    
    return 0;
}

void grid_layout(int grid[9][9]){

    printf("Input the number for the Sudoku from the (left to the right), (the upper rows to the lower rows).");

    for(int i=0; i<=8; i++){
         
        for(int j=0; j<=8; j++){
            
        scanf("%d", grid[i][j]);
            
        }
        
    }
    
}