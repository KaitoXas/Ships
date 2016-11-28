#ifndef SHIP_H
#define SHIP_H
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class Ship
{
    private:
        string shipName;
        string shipYearBuilt;
    
    public:
        Ship(string n, string yB);
        void setShipName(string sn);
        void setShipYearBuilt(string syb);
        string getShipName() const;
        string getShipYearBuilt() const;
        virtual void print ()
        {
            cout << "Ship's Name: "<< getShipName() << "\t\tYear built: " << getShipYearBuilt() << endl;
        }
    
};

#endif