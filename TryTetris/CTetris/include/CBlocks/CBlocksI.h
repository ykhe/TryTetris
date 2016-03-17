#pragma once

#include "CBlock.h"
#include "CBlocks.h"

class CBlocksI : CBlocks
{
public:
    virtual bool rotate (std::vector<unsigned char> map);
    virtual bool down   (std::vector<unsigned char> map);
    virtual bool left   (std::vector<unsigned char> map);
    virtual bool right  (std::vector<unsigned char> map);
};
