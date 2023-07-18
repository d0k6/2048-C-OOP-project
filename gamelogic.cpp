#include "board.h"

void Board::addRandomTile() 
{
    if (!isBoardFull()){
        bool inserted = false;
        int value = (std::rand() % 2 + 1) * 2;
        int x;
        int y;

        while(inserted == false)
        {
        x = (std::rand() % BOARD_SIZE);
        y = (std::rand() % BOARD_SIZE);
        if(board[y][x].getValue() == 0)
            {
            board[y][x].setValue(value);
            inserted = true;
            }
        } 
    }
}

bool Board::isGameOver()
{
    if (fullBoard)
    {
        int i, j;
        gameOver = true;
        for (i = 0; i < BOARD_SIZE; ++i)
        {
            for (j = 1; j < BOARD_SIZE; ++j)
            {
                if (board[i][j].getValue() == board[i][j-1].getValue())
                {
                    gameOver = false;
                    break;
                }
            }
            if (!gameOver)
                break;
        }
        if (gameOver)
        {
            for (j = 0;j < BOARD_SIZE; ++j)
            {
                for (i = 1;i < BOARD_SIZE; ++i)
                {
                    if (board[i][j].getValue() == board[i-1][j].getValue())
                    {
                        gameOver = false;
                        break;
                    }
                }
                if (!gameOver)
                    break;
            }
        }

    }
    if (!fullBoard)
        gameOver = false;

    return gameOver;
}

bool Board::hasWon()
{
    Won=false;
    int i,j;
    for (i = 0; i < BOARD_SIZE; ++i) 
    {
        for (j = 0; j < BOARD_SIZE; ++j) 
        {
            if (board[i][j].getValue() == 2048) 
            {
                Won=true;
                break;
            }  
        }
        if (Won)
            break;
    }
    return Won;
}

bool Board::isBoardFull()
{
    fullBoard=true;
    int i,j;
    for (i = 0; i < BOARD_SIZE; ++i) 
    {
        for (j = 0; j < BOARD_SIZE; ++j) 
        {
            if (board[i][j].getValue() == 0) 
            {
                fullBoard=false;
                break;
            }
        }
        if (!fullBoard)
            break;
    }
    return fullBoard;
}