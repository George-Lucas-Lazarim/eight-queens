#ifndef EIGHTQUEENS_H
#define EIGHTQUEENS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SIZE 8

void startboard (int board[]);
bool checkposition (int board[], int line, int column);

#endif