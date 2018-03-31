#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>


using namespace std;

class Vehicle
{
    string vID;
    string brand;
    string motor;
    string color;
    int speed;
    int capacity;
    int wheels;
    int year;
    int price;
    int acceleration;
public:
    Vehicle(string vID, string newBrand, string newMotor, string newColor, int newSpeed, int newCapacity, int newWheels, int newYear, int newPrice, int newAcceleration ); //constructor

    void setVID(string vID);
    void setBrand(string newBrand);
    void setMotor(string newMotor);
    void setColor(string newColor);
    void setSpeed(int speed);
    void setCapacity(int capacity);
    void setWheels(int wheels);
    void setYear(int year);
    void setPrice(int price);
    void setAcceleration (int acceleration);

    string getVID();
    string getBrand();
    string getMotor();
    string getColor();
    int getSpeed();
    int getCapacity();
    int getWheels();
    int getYear();
    int getPrice();
    int getAcceleration();
};

Vehicle::Vehicle(string newVID = "null",string newBrand = "null", string newMotor = "null", string newColor = "null", int newSpeed = 0, int newCapacity = 0, int newWheels = 0, int newYear = 0, int newPrice = 0, int newAcceleration = 0)
{


    vID = newVID;
    brand=newBrand;
    motor=newMotor;
    color=newColor;
    speed=newSpeed;
    capacity=newCapacity;
    wheels=newWheels;
    year=newYear;
    price=newPrice;
    acceleration=newAcceleration;




};

void Vehicle::setVID(string newVID)
{
    vID = newVID;
};
void Vehicle::setBrand(string newBrand)
{
    brand=newBrand;
};
void Vehicle::setMotor(string newMotor)
{
    motor=newMotor;
};
void Vehicle::setColor(string newColor)
{
    color=newColor;
};
void Vehicle::setSpeed(int newSpeed)
{
    speed=newSpeed;
};
void Vehicle::setCapacity(int newCapacity)
{
    capacity=newCapacity;
};
void Vehicle::setWheels(int newWheels)
{
    wheels=newWheels;
};
void Vehicle::setYear(int newYear)
{
    year=newYear;
};
void Vehicle::setPrice(int newPrice)
{
    price=newPrice;
};

void Vehicle::setAcceleration(int newAcceleration)
{
    acceleration=newAcceleration;

};

string Vehicle::getVID()
{
    return vID;
};
string Vehicle::getBrand()
{
    return brand;
};
string Vehicle::getMotor()
{
    return motor;
};
string Vehicle::getColor()
{
    return color;
};
int Vehicle::getSpeed()
{
    return speed;
};
int Vehicle::getCapacity()
{
    return capacity;
};
int Vehicle::getWheels()
{
    return wheels;
};
int Vehicle::getYear()
{
    return year;
};
int Vehicle::getPrice()
{
    return price;
};


class Land : public Vehicle{};

class Sea : public Vehicle{};

class Air : public Vehicle
{
    bool landing;
public:
    int getLanding()
    {
        return landing;
    };
    void setLanding(bool newLanding)
    {
        landing=newLanding;
    };
};
class Motorized : public Land {};

class NonMotorized : public Land {};

class Bicycle : public NonMotorized
{
public:
    Bicycle()
    {
        Vehicle();
    }
};
class Car : public Motorized
{
    string fuel;
public :
    void setFuel(string newFuel="null")
    {
        fuel=newFuel;
        Vehicle();

    };
    string getFuel()
    {
        return fuel;
    };
};

class Ship : public Sea
{
public:
    Ship ()
    {
        Vehicle();
    }
};
class Plane : public Air
{
public:
    Plane (bool newLanding)
    {
        Vehicle();
        setLanding(newLanding);
        getLanding();
    }

    Plane ()
    {
        Vehicle();
    }
};
class AirShip : public Air //, public Sea
{
public:
    AirShip (bool newLanding)
    {
        Vehicle();
        setLanding(newLanding);
        getLanding();
    }
    AirShip()
    {
        Vehicle();
    };
};


int main()
{
    int ID = 0;

    int menu = 8;
    int wmenu = 1;
    int subMenu = 8;
    int wsubMenu = 1;

    while (wmenu != 0)
    {
        int subMenu = 8;
        int wsubMenu = 1;
        cout << "======================================"<< endl;
        cout << "=INTERFACE : Please use the numbers! \n" << "=1 .Data Entry \n" << "=2. List Data \n" << "=3. Update Data \n" << "=0. Exit \n=" << endl;
        cout << "=Insert a number : " ;
        cin >> menu;
        cout << "======================================"<< endl;
        system("CLS");
        switch (menu)
        {
        case 1:
        {
            cout << "======================================"<< endl;
            cout << "==Choose your vehicle: \n"<< "==1. Car \n" << "==2. Bicycle \n" << "==3. Ship \n" << "==4. Airplane \n" << "==5. Flying Ship \n" << "==9. Back to previous menu \n" << "==0. Exit \n==" << endl;
            cout << "==Insert a number : " ;
            cin >> subMenu;
            system("CLS");

            while (wsubMenu != 0)
            {

                string vName = "null";
                string vBrand = "null";
                string vMotor = "null";
                string vColor = "null";
                int vSpeed = 0;
                int vCapacity = 0;
                int vWheels = 0;
                int vYear = 0;
                int vPrice = 0;
                string data;
                string vFuel = "null";

                switch(subMenu)
                {
                case 1:
                {
                    ofstream outVehicleCount;
                    outVehicleCount.open("VehicleCount.txt",ios::app);

                    Car car;
                    cout << "======================================"<< endl;
                    cout << "===Car name :";
                    cin >> vName;
                    car.setVID(vName);
                    outVehicleCount << car.getVID() ;
                    outVehicleCount << "-";

                    cout << "===Car brand :";
                    cin >> vBrand;
                    car.setBrand(vBrand);
                    outVehicleCount << car.getBrand();
                    outVehicleCount << "-";

                    cout << "===Car motor :";
                    cin >> vMotor;
                    car.setMotor(vMotor);
                    outVehicleCount << car.getMotor();
                    outVehicleCount << "-";

                    cout << "===Car color :";
                    cin >> vColor;
                    car.setColor(vColor);
                    outVehicleCount << car.getColor();
                    outVehicleCount << "-";

                    cout << "===Car speed (digit only):";
                    cin >> vSpeed;
                    car.setSpeed(vSpeed);
                    outVehicleCount << car.getSpeed();
                    outVehicleCount << "-";

                    cout << "===Car capacity (digit only):";
                    cin >> vCapacity;
                    car.setCapacity(vCapacity);
                    outVehicleCount << car.getCapacity();
                    outVehicleCount << "-";

                    cout << "===Car wheel (digit only):";
                    cin >> vWheels;
                    car.setWheels(vWheels);
                    outVehicleCount << car.getWheels();
                    outVehicleCount << "-";

                    cout << "===Car year (digit only):";
                    cin >> vYear;
                    car.setYear(vYear);
                    outVehicleCount << car.getYear();
                    outVehicleCount << "-";

                    cout << "===Car price (digit only):";
                    cin >> vPrice;
                    car.setPrice(vPrice);
                    outVehicleCount << car.getPrice();
                    outVehicleCount << "-";

                    cout << "===Car fuel :";
                    cin >> vFuel;
                    car.setFuel(vFuel);
                    outVehicleCount << car.getFuel() << endl;
                    outVehicleCount << "";

                    system("CLS");
                    wsubMenu=0;

                    outVehicleCount.close();

                    break;
                }
                case 2:
                {
                    ofstream outVehicleCount;
                    outVehicleCount.open("VehicleCount.txt",ios::app);

                    Bicycle bicycle;
                    cout << "======================================"<< endl;
                    cout << "===Bicycle name :";
                    cin >> vName;
                    bicycle.setVID(vName);
                    outVehicleCount << bicycle.getVID();
                    outVehicleCount << "";

                    cout << "===Bicycle brand :";
                    cin >> vBrand;
                    bicycle.setBrand(vBrand);
                    outVehicleCount << bicycle.getBrand();
                    outVehicleCount << "";

                    cout << "===Bicycle motor :";
                    cin >> vMotor;
                    bicycle.setMotor(vMotor);
                    outVehicleCount << bicycle.getMotor();
                    outVehicleCount << "";

                    cout << "===Bicycle color :";
                    cin >> vColor;
                    bicycle.setColor(vColor);
                    outVehicleCount << bicycle.getColor();
                    outVehicleCount << "";

                    cout << "===Bicycle speed (digit only):";
                    cin >> vSpeed;
                    bicycle.setSpeed(vSpeed);
                    outVehicleCount << bicycle.getSpeed();
                    outVehicleCount << "";

                    cout << "===Bicycle capacity (digit only):";
                    cin >> vCapacity;
                    bicycle.setCapacity(vCapacity);
                    outVehicleCount << bicycle.getCapacity();
                    outVehicleCount << "";

                    cout << "===Bicycle wheel (digit only):";
                    cin >> vWheels;
                    bicycle.setWheels(vWheels);
                    outVehicleCount << bicycle.getWheels();
                    outVehicleCount << "";

                    cout << "===Bicycle year (digit only):";
                    cin >> vYear;
                    bicycle.setYear(vYear);
                    outVehicleCount << bicycle.getYear();
                    outVehicleCount << "";

                    cout << "===Bicycle price (digit only):";
                    cin >> vPrice;
                    bicycle.setPrice(vPrice);
                    outVehicleCount << bicycle.getPrice();

                    system("CLS");
                    wsubMenu=0;

                    outVehicleCount.close();

                    break;
                }
                case 3:
                {
                    ofstream outVehicleCount;
                    outVehicleCount.open("VehicleCount.txt",ios::app);

                    Ship ship;
                    cout << "======================================"<< endl;
                    cout << "===Ship name :";
                    cin >> vName;
                    ship.setVID(vName);
                    outVehicleCount << ship.getVID();
                    outVehicleCount << "";

                    cout << "===Ship brand :";
                    cin >> vBrand;
                    ship.setBrand(vBrand);
                    outVehicleCount << ship.getBrand();
                    outVehicleCount << "";

                    cout << "===Ship motor :";
                    cin >> vMotor;
                    ship.setMotor(vMotor);
                    outVehicleCount << ship.getMotor();
                    outVehicleCount << "";

                    cout << "===Ship color :";
                    cin >> vColor;
                    ship.setColor(vColor);
                    outVehicleCount << ship.getColor();
                    outVehicleCount << "";

                    cout << "===Ship speed (digit only):";
                    cin >> vSpeed;
                    ship.setSpeed(vSpeed);
                    outVehicleCount << ship.getSpeed();
                    outVehicleCount << "";

                    cout << "===Ship capacity (digit only):";
                    cin >> vCapacity;
                    ship.setCapacity(vCapacity);
                    outVehicleCount << ship.getCapacity();
                    outVehicleCount << "";

                    cout << "===Ship wheel (digit only):";
                    cin >> vWheels;
                    ship.setWheels(vWheels);
                    outVehicleCount << ship.getWheels();
                    outVehicleCount << "";

                    cout << "===Ship year (digit only):";
                    cin >> vYear;
                    ship.setYear(vYear);
                    outVehicleCount << ship.getYear();
                    outVehicleCount << "";

                    cout << "===Ship price (digit only):";
                    cin >> vPrice;
                    ship.setPrice(vPrice);
                    outVehicleCount << ship.getPrice();

                    system("CLS");
                    wsubMenu=0;

                    outVehicleCount.close();

                    break;
                }
                case 4:
                {
                    ofstream outVehicleCount;
                    outVehicleCount.open("VehicleCount.txt",ios::app);

                    Plane plane;
                    cout << "======================================"<< endl;
                    cout << "===Plane name :";
                    cin >> vName;
                    plane.setVID(vName);
                    outVehicleCount << plane.getVID();
                    outVehicleCount << "";

                    cout << "===Plane brand :";
                    cin >> vBrand;
                    plane.setBrand(vBrand);
                    outVehicleCount << plane.getBrand();
                    outVehicleCount << "";

                    cout << "===Plane motor :";
                    cin >> vMotor;
                    plane.setMotor(vMotor);
                    outVehicleCount << plane.getMotor();
                    outVehicleCount << "";

                    cout << "===Plane color :";
                    cin >> vColor;
                    plane.setColor(vColor);
                    outVehicleCount << plane.getColor();
                    outVehicleCount << "";

                    cout << "===Plane speed (digit only):";
                    cin >> vSpeed;
                    plane.setSpeed(vSpeed);
                    outVehicleCount << plane.getSpeed();
                    outVehicleCount << "";

                    cout << "===Plane capacity (digit only):";
                    cin >> vCapacity;
                    plane.setCapacity(vCapacity);
                    outVehicleCount << plane.getCapacity();
                    outVehicleCount << "";

                    cout << "===Plane wheel (digit only):";
                    cin >> vWheels;
                    plane.setWheels(vWheels);
                    outVehicleCount << plane.getWheels();
                    outVehicleCount << "";

                    cout << "===Plane year (digit only):";
                    cin >> vYear;
                    plane.setYear(vYear);
                    outVehicleCount << plane.getYear();
                    outVehicleCount << "";

                    cout << "===Plane price (digit only):";
                    cin >> vPrice;
                    plane.setPrice(vPrice);
                    outVehicleCount << plane.getPrice();

                    system("CLS");
                    wsubMenu=0;

                    outVehicleCount.close();

                    break ;
                }
                case 5:
                {
                    ofstream outVehicleCount;
                    outVehicleCount.open("VehicleCount.txt",ios::app);

                    AirShip airship;
                    cout << "======================================"<< endl;
                    cout << "===AirShip name :";
                    cin >> vName;
                    airship.setVID(vName);
                    outVehicleCount << airship.getVID();
                    outVehicleCount << "";

                    cout << "===AirShip brand :";
                    cin >> vBrand;
                    airship.setBrand(vBrand);
                    outVehicleCount << airship.getBrand();
                    outVehicleCount << "";

                    cout << "===AirShip motor :";
                    cin >> vMotor;
                    airship.setMotor(vMotor);
                    outVehicleCount << airship.getMotor();
                    outVehicleCount << "";

                    cout << "===AirShip color :";
                    cin >> vColor;
                    airship.setColor(vColor);
                    outVehicleCount << airship.getColor();
                    outVehicleCount << "";

                    cout << "===AirShip speed (digit only):";
                    cin >> vSpeed;
                    airship.setSpeed(vSpeed);
                    outVehicleCount << airship.getSpeed();
                    outVehicleCount << "";

                    cout << "===AirShip capacity (digit only):";
                    cin >> vCapacity;
                    airship.setCapacity(vCapacity);
                    outVehicleCount << airship.getCapacity();
                    outVehicleCount << "";

                    cout << "===AirShip wheel (digit only):";
                    cin >> vWheels;
                    airship.setWheels(vWheels);
                    outVehicleCount << airship.getWheels();
                    outVehicleCount << "";

                    cout << "===AirShip year (digit only):";
                    cin >> vYear;
                    airship.setYear(vYear);
                    outVehicleCount << airship.getYear();
                    outVehicleCount << "";

                    cout << "===AirShip price (digit only):";
                    cin >> vPrice;
                    airship.setPrice(vPrice);
                    outVehicleCount << airship.getPrice();

                    system("CLS");
                    wsubMenu=0;

                    outVehicleCount.close();

                    break;
                }
                case 9:
                {
                    cout << "===Back to previous menu \n===" << endl;

                    system("CLS");
                    wsubMenu=0;
                    break;
                }
                case 0:
                {
                    cout << "===Exit \n===" << endl;

                    system("CLS");
                    wsubMenu=0;
                    wmenu=0;
                    break;
                }
                default:
                {
                    cout << "===Please insert valid number. \n===";

                    cin >> subMenu;
                    system("CLS");
                    break;
                }
                }
            }
            break;
        }

        case 2:
        {
            int ID = 100;

            cout << "======================================"<< endl;
            cout << "==Select the Data Type you want to list \n==" << endl;
            cout << "==1. Land Vehicles \n" << "==2. Maritime Vehicles \n" << "==3. Air Vehicles \n==" << endl;
            cout << "==9. Back to previous menu \n" << "==0. Exit \n==" << endl;
            cout << "==How many lines do you wanna see on the page ? :" ;
            cin >> ID;
            ID--;
            cout << "==Insert a number (press 9 for turn back, press 0 for exit): ";
            cin >> subMenu;
            system("CLS");
            while(wsubMenu != 0)
            {
                string vName = "null";
                string vBrand = "null";
                string vMotor = "null";
                string vColor = "null";
                int vSpeed = 0;
                int vCapacity = 0;
                int vWheels = 0;
                int vYear = 0;
                int vPrice = 0;

                string data;

                switch(subMenu)
                {
                case 1:
                {
                    cout << "===Land Vehicles \n===" << endl;
                    wsubMenu=0;
                    ifstream inVehicleCount;
                    inVehicleCount.open("VehicleCount.txt" );
                    cout << "===Reading from the file :" << endl;

                    int i;
                    ID ++;
                    for(i=0; i<ID; i++)
                    {
                        inVehicleCount >> data;
                        cout << data << endl;
                    }
                    data = "";
                    inVehicleCount.close();
                    break;
                }
                case 2:
                {
                    cout << "===Maritime Vehicles \n===" << endl;
                    wsubMenu=0;

                    ifstream inVehicleCount;
                    inVehicleCount.open("VehicleCount.txt" );
                    cout << "===Reading from the file :" << endl;

                    int i;
                    ID ++;
                    for(i=0; i<ID; i++)
                    {
                        inVehicleCount >> data;
                        cout << data << endl;
                    }
                    data = "";

                    inVehicleCount.close();
                    break;
                }
                case 3:
                {
                    cout << "===Air Vehicles \n===" << endl;
                    wsubMenu=0;
                    ifstream inVehicleCount;
                    inVehicleCount.open("VehicleCount.txt" );
                    cout << "===Reading from the file :" << endl;

                    int i;
                    ID ++;
                    for(i=0; i<ID; i++)
                    {
                        inVehicleCount >> data;
                        cout << data << endl;
                    }
                    data = "";
                    inVehicleCount.close();
                    break;
                }
                case 9:
                {
                    system("CLS");
                    wsubMenu=0;
                    break;
                }
                case 0:
                {
                    system("CLS");
                    wsubMenu=0;
                    wmenu=0;
                    break;
                }
                default:
                {
                    cout << "===Please insert valid number. \n===";
                    cin >> subMenu;
                    system("CLS");
                    break;
                }
                }

            }
            break;
        }
        case 3:
        {
            cout << "======================================"<< endl;
            cout << "==Update Data \n"
                 << "==Enter the Vehicle Id you want to update\n";
            cout << "==Choose your vehicle: \n"<< "==1. Car \n" << "==2. Bicycle \n" << "==3. Ship \n" << "==4. Airplane \n" << "==5. Flying Ship \n" << "==9. Back to previous menu \n" << "==0. Exit \n==" << endl;
            cout << "==Insert a number : " ;
            cin >> subMenu;
            system("CLS");

            while (wsubMenu != 0)
            {
                string vName = "null";
                string vBrand = "null";
                string vMotor = "null";
                string vColor = "null";
                int vSpeed = 0;
                int vCapacity = 0;
                int vWheels = 0;
                int vYear = 0;
                int vPrice = 0;
                switch(subMenu)
                {
                case 1:
                {
                    cout << "===Update Car \n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break;
                }
                case 2:
                {
                    cout << "===Update Bicycle \n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break;
                }
                case 3:
                {
                    cout << "===Update Ship \n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break;
                }
                case 4:
                {
                    cout << "===Update Airplane\n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break ;
                }
                case 5:
                {
                    cout << "===Update Flying ship \n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break;
                }
                case 9:
                {
                    cout << "===Back to previous menu \n===" << endl;
                    wsubMenu=0;
                    system("CLS");
                    break;
                }
                case 0:
                {
                    cout << "===Exit \n===" << endl;
                    wsubMenu=0;
                    wmenu=0;
                    system("CLS");
                    break;
                }
                default:
                {
                    cout << "===Please insert valid number. \n===";
                    cin >> subMenu;
                    system("CLS");
                    break;
                }

                }
            }
            break;
        }

        case 0:
        {
            wmenu=0;
            break;
        }

        default :
        {
            cout << "=Please insert valid number. \n";
        }
        }
    }
    return 0;
}
