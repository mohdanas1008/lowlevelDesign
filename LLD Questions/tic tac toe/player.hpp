#pragma once
#include "common.hpp"
#include "playingPeace.hpp"

class Player
{

    PlayingPeace *playersPeace;
    string name;
    public:
    Player(string playerName, PlayingPeace* type) : name(playerName), playersPeace(type) {
        cout<<"Player "<<playerName<<"Added"<<endl;
    };
    PlayingPeace * getplayersPeace(){return playersPeace;};
    string getName(){return name;}

    ~Player(){
        delete playersPeace;
    }
};