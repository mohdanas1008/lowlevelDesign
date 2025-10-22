#include "Board.hpp"
#include "defaultPlayingPeace_.hpp"

Board *Board::gameBoardObj = nullptr;

// using singletone DP to keep single object of board
Board *Board::getBoardObject(int size)
{
    if (Board::gameBoardObj == nullptr)
    {
        Board::gameBoardObj = new Board(size);
    }
    return gameBoardObj;
}

void Board::displayBoard()
{
    cout<<"Below is current Board"<<endl;
    for (vector<PlayingPeace*> boardRow : gameBoard)
    {
        for (PlayingPeace* boardCell : boardRow)
        {
            string cellValue=boardCell->getPeaceType();
            cout << "| " << cellValue<< " | ";
        }
        cout << endl;
    }
}

vector<vector<PlayingPeace *>> Board::getGameBoard()
{
    return gameBoard;
}

int Board::getFreeCells()
{
    return freeCellCount;
}

void Board::updateFreeCells()
{
    cout<<"freecount"<<freeCellCount<<endl;
    freeCellCount--;
}

bool Board::addPeace(int row, int col, PlayingPeace *playingPeace)
{
    if (gameBoard[row][col]->getPeaceType() != Common::getPeaceType(PeaceType::_))
    {
        cout<<"1: "<<gameBoard[row][col]->getPeaceType()<<endl;
        cout<<"2: "<<Common::getPeaceType(PeaceType::_);
        return false;
    }
    gameBoard[row][col] = playingPeace;
    int cnt = getFreeCells();
    updateFreeCells();
    return true;
}

int Board::getBoardSize()
{
    return boardSize;
}

void Board::setBoardSize(int s)
{
    boardSize = s;
}