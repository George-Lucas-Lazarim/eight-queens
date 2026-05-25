#include "eightqueens.h"

bool checkposition (int board[], int line, int column) {
    int linedist, columndist;

    for (int i = 0; i < column; i++) {
        linedist = abs(line - board[i]);
        columndist = abs(column - i);

        if (linedist == columndist || line == board[i]) return false;
    }
    return true;
}