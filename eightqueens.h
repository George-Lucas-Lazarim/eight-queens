#ifndef EIGHTQUEENS_H
#define EIGHTQUEENS_H

#include <stdbool.h>

#define SIZE 8

extern int totalsolutions;

void startboard (int board[]);
bool checkposition (int board[], int line, int column);
void solvequeens (int board[]);

#endif