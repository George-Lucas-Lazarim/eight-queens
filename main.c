#include "eightqueens.h"

int main() {
    int board[SIZE];
    startboard(board);

    solvequeens(board, 0);
}