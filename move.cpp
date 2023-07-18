#include "board.h"

void Board::moveTilesUp() 
{
    for (int j = 0; j < BOARD_SIZE; ++j) 
    {
        int currentRow = 0;
        for (int i = 1; i < BOARD_SIZE; ++i) 
        {
            if (board[i][j].getValue() != 0) 
            {
                if (board[currentRow][j].getValue() == 0) 
                {
                    board[currentRow][j].setValue(board[i][j].getValue());
                    board[i][j].setValue(0);
                } 
                else if (board[currentRow][j].getValue() == board[i][j].getValue()) 
                {
                    board[currentRow][j].setValue(board[currentRow][j].getValue() * 2);
                    score += board[currentRow][j].getValue();
                    board[i][j].setValue(0);
                } 
                else 
                {
                    ++currentRow;
                    board[currentRow][j].setValue(board[i][j].getValue());
                    if (i != currentRow)
                    {
                        board[i][j].setValue(0);
                    }
                }
            }
        }
    }
}

void Board::moveTilesDown() 
{
    for (int j = 0; j < BOARD_SIZE; ++j) 
    {
        int currentRow = BOARD_SIZE - 1;
        for (int i = BOARD_SIZE - 2; i >= 0; --i) 
        {
            if (board[i][j].getValue() != 0) 
            {
                if (board[currentRow][j].getValue() == 0) 
                {
                    board[currentRow][j].setValue(board[i][j].getValue());
                    board[i][j].setValue(0);
                } else if (board[currentRow][j].getValue() == board[i][j].getValue()) 
                {
                    board[currentRow][j].setValue(board[currentRow][j].getValue() * 2);
                    score += board[currentRow][j].getValue();
                    board[i][j].setValue(0);
                } else 
                {
                    --currentRow;
                    board[currentRow][j].setValue(board[i][j].getValue());
                    if (i != currentRow) 
                    {
                        board[i][j].setValue(0);
                    }
                }
            }
        }
    }
}

void Board::moveTilesLeft() 
{
    for (int i = 0; i < BOARD_SIZE; ++i) 
        {
        int currentColumn = 0;
        for (int j = 1; j < BOARD_SIZE; ++j) 
        {
            if (board[i][j].getValue() != 0) 
            {
                if (board[i][currentColumn].getValue() == 0) 
                {
                    board[i][currentColumn].setValue(board[i][j].getValue());
                    board[i][j].setValue(0);
                } 
                else if (board[i][currentColumn].getValue() == board[i][j].getValue()) 
                {
                    board[i][currentColumn].setValue(board[i][currentColumn].getValue() * 2);
                    score += board[i][currentColumn].getValue();
                    board[i][j].setValue(0);
                } 
                else 
                {
                    ++currentColumn;
                    board[i][currentColumn].setValue(board[i][j].getValue());
                    if (j != currentColumn) 
                    {
                        board[i][j].setValue(0);
                    }
                }
            }
        }
    }
}

void Board::moveTilesRight() 
{
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        int currentColumn = BOARD_SIZE - 1;
        for (int j = BOARD_SIZE - 2; j >= 0; --j) 
        {
            if (board[i][j].getValue() != 0) {
                if (board[i][currentColumn].getValue() == 0) 
                {
                    board[i][currentColumn].setValue(board[i][j].getValue());
                    board[i][j].setValue(0);
                } 
                else if (board[i][currentColumn].getValue() == board[i][j].getValue())
                {
                    board[i][currentColumn].setValue(board[i][currentColumn].getValue() * 2);
                    score += board[i][currentColumn].getValue();
                    board[i][j].setValue(0);
                } 
                else 
                {
                    --currentColumn;
                    board[i][currentColumn].setValue(board[i][j].getValue());
                    if (j != currentColumn) 
                    {
                        board[i][j].setValue(0);
                    }
                }
            }
        }
    }
}