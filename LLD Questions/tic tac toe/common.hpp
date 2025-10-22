#pragma once
#include <bits/stdc++.h>
using namespace std;
enum class PeaceType
{
    X,
    O,
    _,
};

class Common
{
public:
    static string getPeaceType(PeaceType peace)
    {
        switch (peace)
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
};