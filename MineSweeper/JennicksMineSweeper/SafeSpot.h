#ifndef SAFESPOT_H
#define SAFESPOT_H
#include "GridPosition.h"

/* A safe spot on the grid. When revealed, if there are no mines adjacent to
 * this position, then all adjacent positions will also be revealed.
 */
class SafeSpot : public GridPosition
{
public:
    SafeSpot();

    
};

#endif // SAFESPOT_H
