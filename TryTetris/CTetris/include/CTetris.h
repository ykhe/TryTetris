#pragma once

#include <CBlocks\CBlock.h>
#include <CBlocks\CRBlock.h>

class CTetris
{
public:
    virtual void merge();
    virtual bool smallRotate();
    virtual bool smallDown();
    virtual bool smallLeft();
    virtual bool smallRight();
protected:
    int small_x;
    int small_y;
    CRBlock* pSmallBlocks_;
    CBlock* pBigBlocks_;
};