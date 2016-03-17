#pragma once

#include "CBlock.h"
#include "CBlocks.h"

#include <vector>

class CTetris
{
public:
    CTetris()
        : x_(0), y_(0), r_(0)
        , pCurrent_(nullptr)
    {
        memset(blockMap_, 0, sizeof(blockMap_));
    };
    std::vector<int> eraseLine();
    std::vector<unsigned char> getMap();
    void setMap(std::vector<unsigned char>);

private:
    void moveToMap_();

private:
    int x_, y_;
    int r_;

    CBlocks *pCurrent_;

    CBlock blockMap_[20][10];
};