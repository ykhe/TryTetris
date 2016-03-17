// Simple Block
#pragma once

#include <vector>

class CBlock
{
public:
    CBlock(int, int);
    std::vector<bool> getSquare() {return square_;};
    virtual bool cover(int x, int y, std::vector<bool> big)
    {
        
    };

protected:
    std::vector<bool> square_;
    int size_x_;    // row
    int size_y_;    // col
};