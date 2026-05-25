#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "eightqueens.h"

int totalsolutions = 0;

void startboard (int board[]) {
    for (int i = 0; i < SIZE; i++) board[i] = -1;
}

bool checkposition (int board[], int line, int column) {
    int linedist, columndist;

    for (int i = 0; i < column; i++) {
        linedist = abs(line - board[i]);
        columndist = abs(column - i);

        if (linedist == columndist || line == board[i]) return false;
    }
    return true;
}

void solvequeens (int board[], int column) {
    if (column == SIZE) {
        totalsolutions++;
        printf("\n--- solution %d ---\n", totalsolutions);
        //printtable!!!
        return;
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (checkposition(board, i, column)) {
            board[column] = i;
            solvequeens(board, column + 1);
        }
    }
}