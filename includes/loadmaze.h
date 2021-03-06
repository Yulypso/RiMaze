#ifndef LOADMAZE_H
#define LOADMAZE_H

#include "utils.h"

void loadMazeFromFile(char *fileName);
void initBoard(volatile Maze *maze);
void initMaze(char *fileName);
void freeMaze(volatile Maze *maze);
void createCellAtPosition(volatile Maze *maze, unsigned short int x, unsigned short int y);
void displayCellWallsAtPosition(volatile Maze *maze, unsigned short int x, unsigned short int y);
void displayCells(unsigned short int x, unsigned short int y);
void displayDecorativeWall(volatile Maze *maze, unsigned short int x, unsigned short int y);
unsigned short int checkWall(volatile Maze *maze, unsigned short int x, unsigned short int y, unsigned short int pos);
unsigned short int checkBreakLeft(volatile Maze *maze, unsigned short int x, unsigned short int y);
unsigned short int checkBreakUpper(volatile Maze *maze, unsigned short int x, unsigned short int y);
unsigned short int checkBreakBottom(volatile Maze *maze, unsigned short int x, unsigned short int y);

#endif