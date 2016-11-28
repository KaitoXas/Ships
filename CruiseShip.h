#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "Ship.h"
#include <iostream>

class CruiseShip:public Ship
{
    private:
        int maxPax;
    
    public:
        CruiseShip(string n,string yB, int mp):Ship(n, yB)
        {
            maxPax = mp;
        }
        int getMaxPax() const;
        virtual void print()
        {
            cout << "Ship's Name: "<< getShipName() << "\t\tMaximum PAX: " << getMaxPax() <<endl;
        }
};

#endif