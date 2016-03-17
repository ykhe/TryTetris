#pragma once

#include "CBlock.h"

#include <vector>

class CBlocks
{
public:
    CBlocks() : x_(0), y_(0), r_(0) {};
    void setPoint(int x, int y) {x_ = x; y_ = y;};
    void setR(int r) {r_ = r;};
    virtual bool rotate (std::vector<unsigned char> map) = 0;
    virtual bool down   (std::vector<unsigned char> map) = 0;
    virtual bool left   (std::vector<unsigned char> map) = 0;
    virtual bool right  (std::vector<unsigned char> map) = 0;

private:
    int x_, y_;
    int r_;
    int nMax_
    int rMax_;
    std::vector<CBlock> blocks;
};