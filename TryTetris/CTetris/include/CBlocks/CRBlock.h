// Rotatable Block
#pragma once

#include <CBlocks\CBlock.h>

#include <vector>

class CRBlock : public CBlock
{
public:
    CRBlock(int s, int rMax, int r) : CBlock(s, s), rMax_(rMax), r_(r) {};
    virtual bool rotate(CBlock*) = 0;
    int size();
protected:
    virtual int next_r(){return r_ = (++r_)%rMax_;};
    int rMax_;
    int r_;
};