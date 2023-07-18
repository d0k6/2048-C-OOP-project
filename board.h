#ifndef board_h
#define board_h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "tile.h"

class Board 
{
    private:
        //2d vector
        std::vector<std::vector<Tile>> board;
        int score;
        bool gameOver;
        bool fullBoard;
        bool Won;
        unsigned long counter;

    public:
        Board();
        ~Board();

        int getScore() const;
        unsigned long getCounter() const;
        void resetCounter();
        void MoveCounter();

        void printBoard() const;
        void addRandomTile();

        void moveTilesUp();
        void moveTilesDown();
        void moveTilesLeft();
        void moveTilesRight();

        bool isGameOver();
        bool hasWon();
        bool isBoardFull();
        const int BOARD_SIZE = 4;
};

#endif