#include<bits/stdc++.h>

#include"Board.hpp"
#include"Player.hpp"
#include"game.hpp"

using namespace std;

int main(){
    cout<<"welcome to tic tac toe"<<endl;
    Game* gameObj=new Game();
    gameObj->initializeGame();
    gameObj->startGame();
    delete gameObj; 
    return 0;
}