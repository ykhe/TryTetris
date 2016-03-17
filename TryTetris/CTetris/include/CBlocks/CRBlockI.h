// Rotatable Block I
// ¡õ¡õ¡õ¡õ    ¡õ¡ö¡õ¡õ
// ¡ö¡ö¡ö¡ö => ¡õ¡ö¡õ¡õ
// ¡õ¡õ¡õ¡õ    ¡õ¡ö¡õ¡õ
// ¡õ¡õ¡õ¡õ    ¡õ¡ö¡õ¡õ
#pragma once

#include <CBlocks\CBlock.h>
#include <CBlocks\CRBlock.h>

class CRBlockI : public CRBlock
{
public:
    CRBlockI(int s, int rMax, int r) : CRBlock(s, rMax, r) {};
    virtual bool rotate (int x, int y, CBlock* map);
};

bool type1[16] = 
{ 0,0,0,0,
  1,1,1,1,
  0,0,0,0,
  0,0,0,0
};