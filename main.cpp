#include "board.h"

char getUserMove() 
{
    char move;
    std::cout << "Enter your move (w/a/s/d): ";
    std::cin >> move;
    return move;
}

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    char move;
    Board board;
    board.addRandomTile();
    board.addRandomTile();
    board.printBoard();
    board.resetCounter();

    while (!board.isGameOver())
    {
        board.MoveCounter();
        move = getUserMove();

        switch (move)
        {
        case 'w':
            board.moveTilesUp();
            break;
        case 'a':
            board.moveTilesLeft();
            break;
        case 's':
            board.moveTilesDown();
            break;
        case 'd':
            board.moveTilesRight();
            break;
        default:
            std::cout << "Invalid move" << std::endl;
            continue;
        }

        board.addRandomTile();

        board.printBoard();

        if (board.hasWon())
        {
            std::cout << "You have reached 2048!" << std::endl;
            break;
        }
    }

    if (!board.hasWon())
    {
    std::cout << "Game over :<" << std::endl << "Score: " << board.getScore() << std::endl << "Moves: " << board.getCounter() << std::endl;
    }
    return 0;
}
