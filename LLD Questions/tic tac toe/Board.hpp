#pragma once

#include "common.hpp"
#include "playingPeace.hpp"
#include "defaultPlayingPeace_.hpp"
#include "player.hpp"

class Board
{
    int boardSize;
    int freeCellCount;
    vector<vector<PlayingPeace*>> gameBoard;
    static Board *gameBoardObj;

public:
    Board(int size) : boardSize(size), freeCellCount(size*size)
    {
        gameBoard.resize(boardSize, vector<PlayingPeace *>(boardSize, new DefaultPlayingPeace()));
        // for (int i = 0; i < boardSize; i++)
        // {
        //     for (int j = 0; j < boardSize; j++)
        //     {
        //         gameBoard[i][j] = new DefaultPlayingPeace();
        //     }
        // }
    };
    void displayBoard();
    int getFreeCells();
    void updateFreeCells();
    bool addPeace(int row, int col, PlayingPeace *playingPeace);

    static Board *getBoardObject(int size);
    vector<vector<PlayingPeace *>> getGameBoard();
    int getBoardSize();
    void setBoardSize(int s);
};