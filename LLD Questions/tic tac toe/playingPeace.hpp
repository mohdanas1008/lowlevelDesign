#pragma once

#include "common.hpp"

class PlayingPeace
{
    PeaceType playingPeace;

public:
    PlayingPeace(PeaceType type) : playingPeace(type) {};
    virtual ~ PlayingPeace() {};
    string getPeaceType();
};