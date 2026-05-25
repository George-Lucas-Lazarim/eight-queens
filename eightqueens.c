#include "eightqueens.h"

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