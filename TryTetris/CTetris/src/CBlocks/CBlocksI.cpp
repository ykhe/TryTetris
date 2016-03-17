#include <CBlocks\CRBlockI.h>

#include <vector>

bool CRBlockI::rotate (int x, int y, CBlock* map)
{
    std::vector<bool> small;
    auto big = map->getSquare();
    auto r = this->r_;
    switch(r)
    {
    case 0:
        for(auto x = 0; x < this->size_x_; x++)
        {
            for(auto y = 0; y < this->size_y_; y++)
            {
                small.push_back(type1[x+y*size_y_]);
            }
        }
        break;
    case 1:
        for(auto x = 0; x < this->size_x_; x++)
        {
            for(auto y = 0; y < this->size_y_; y++)
            {
                small.push_back(type1[x*size_x_+y]);
            }
        }
        break;
    };
}