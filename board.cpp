#include "board.h"

Board::Board() : score(0), gameOver(false) 
{
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        board.push_back(std::vector<Tile>(BOARD_SIZE));
    }
}

Board::~Board() {};
void Board::printBoard() const 
{
    system("cls");
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        for (int j = 0; j < BOARD_SIZE; ++j) 
        {
            std::cout << board[i][j].getValue() << "\t";
        }
        std::cout << std::endl;
    }std::cout << "Moves: " << counter <<std::endl;
}

int Board::getScore() const
{
    return score;
}

unsigned long Board::getCounter() const
{
    return counter;
}

void Board::resetCounter()
{
    counter = 0;
}

void Board::MoveCounter()
{
    counter++;
}