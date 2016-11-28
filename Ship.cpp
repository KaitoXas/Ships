#include "Ship.h"
#include <stdio.h>
#include <cstdlib>
#include <string>

Ship::Ship(string sN, string sYB)
{
    shipName = sN;
    shipYearBuilt = sYB;
}

string Ship::getShipName() const
{
    return shipName;
}

string Ship::getShipYearBuilt() const
{
    return shipYearBuilt;
}

