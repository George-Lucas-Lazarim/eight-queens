#include "eightqueens.h"
#include <stdio.h>

int main() {
    int board[SIZE];
    startboard(board);

    if (!solveonequeens(board, 0)) printf("No solution was found!\n");

    startboard(board);

    solvequeens(board, 0);
}