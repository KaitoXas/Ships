#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"
#include <iostream>

class CargoShip:public Ship
{
    private:
        int cargoCapacity;
    
    public:
        CargoShip(string n, string yB, int cC):Ship(n, yB)
        {
            cargoCapacity = cC;
        }
        int getCargoCapacity() const;
        virtual void print()
        {
            cout << "Ship's Name: " << getShipName() << "\t\tCapacity: "<< getCargoCapacity() << " tons" <<endl;
        }
    
    
};

#endif