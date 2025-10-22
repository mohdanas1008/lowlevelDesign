#pragma once

#include "common.hpp"
#include "playingPeace.hpp"

class PlayingPeaceO:public PlayingPeace{
    public:
    PlayingPeaceO(): PlayingPeace(PeaceType::O){};
};