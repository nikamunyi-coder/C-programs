/*  Vehicle Management System
 *   Nimrod Kamunyi
 *   BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
  public:
    string  brand;
    unsigned int manufactureYear;

    void displayVehicle()
    {
        cout << "Brand: " << brand << "\n";
        cout << "Year of Manufacture: " << manufactureYear << "\n";
    }
};

class Car : public Vehicle {
  public:
    unsigned int doorCount, engineCapacity;

    void displayCar()
    {
        cout << "Number of Doors: " << doorCount << "\n";
        cout << "Engine capacity: " << engineCapacity << "\n";
    }
};

int main()
{
    Car c;
    c.brand           = "Volvo";
    c.doorCount       = 2;
    c.engineCapacity  = 9000;
    c.manufactureYear = 2025;
    c.displayVehicle();
    c.displayCar();
}
