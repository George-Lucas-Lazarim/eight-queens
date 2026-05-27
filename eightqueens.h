#ifndef EIGHTQUEENS_H
#define EIGHTQUEENS_H

#include <stdbool.h>

#define SIZE 8

extern int totalsolutions;

void startboard (int board[]);
bool checkposition (int board[], int line, int column);
void printboard (int board[]);
void solvequeens (int board[], int column);
bool solveonequeens (int board[], int column);

#endif