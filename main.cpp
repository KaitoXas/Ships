#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main()  {
    
    int i;
    
    Ship *ships[3] = {new Ship("Pearl Cruise", "2016"),
                      new CruiseShip("Melvin", "2006", 2000),
                      new CargoShip("Titan", "1996", 40000)
                     };
    
    for(i=0;i<3;i++)
    {
        ships[i]->print();
    }
    
    return 0;
}
