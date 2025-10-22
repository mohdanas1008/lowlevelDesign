#pragma once

#include "common.hpp"
#include "playingPeace.hpp"

class DefaultPlayingPeace : public PlayingPeace
{

public:
    DefaultPlayingPeace() : PlayingPeace(PeaceType::_) {};
};