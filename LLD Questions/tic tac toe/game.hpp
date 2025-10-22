#pragma once
#include "common.hpp"
#include "Board.hpp"

class Game
{   
    deque<Player*>playersList;
    Board* boardObj;
public:
    Game(){
        boardObj=nullptr;
    };
    deque<Player*> getplayersList();
    void setplayersList(Player *player);
    void initializeGame();
    void startGame();
    bool isWinner(int row, int col, PlayingPeace* playingPeace);

};
