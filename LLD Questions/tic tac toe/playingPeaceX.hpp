#pragma once

#include "common.hpp"
#include "playingPeace.hpp"

class PlayingPeaceX:public PlayingPeace{
    public:
    PlayingPeaceX(): PlayingPeace(PeaceType::X){};
};