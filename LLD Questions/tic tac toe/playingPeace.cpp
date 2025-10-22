#include "playingPeace.hpp"

string PlayingPeace::getPeaceType()
{
    switch (playingPeace)
    {
    case PeaceType::X:
        return "X";
        break;
    case PeaceType::O:
        return "O";
        break;

    default:
        return "_";
        break;
    }
}