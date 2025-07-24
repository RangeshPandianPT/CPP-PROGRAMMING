/* 📝 Task Description
You are required to write a C++ program for a state land registration authority that maintains the records of houses/flats across the state. This includes:

✅ Requirements:
Create a class House with the following data members:

house_name (string)

house_number (string)

city (string)

state (string)

width (float)

height (float)

num_rooms (int)

Implement two constructors:

Default constructor to initialize with default placeholder values.

Parameterized constructor to accept all values as arguments.

Write a member function to print all the house details including the total area of the house (width × height).*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class House {
private:
    string house_name;
    string house_number;
    string city;
    string state;
    float width;
    float height;
    int num_rooms;

public:
    
    House() {
        house_name = "Unknown";
        house_number = "N/A";
        city = "N/A";
        state = "N/A";
        width = 0.0;
        height = 0.0;
        num_rooms = 0;
    }

    
    House(string hname, string hnumber, string cty, string st, float w, float h, int rooms) {
        house_name = hname;
        house_number = hnumber;
        city = cty;
        state = st;
        width = w;
        height = h;
        num_rooms = rooms;
    }

    
    void printDetails() {
        cout << fixed << setprecision(2);
        cout << "\nHouse Name     : " << house_name << endl;
        cout << "House Number   : " << house_number << endl;
        cout << "City           : " << city << endl;
        cout << "State          : " << state << endl;
        cout << "Width (in ft)  : " << width << endl;
        cout << "Height (in ft) : " << height << endl;
        cout << "No. of Rooms   : " << num_rooms << endl;
        cout << "Total Area     : " << (width * height) << " sq.ft\n";
        cout << "-------------------------------------" << endl;
    }
};

int main() {
    
    House defaultHouse;
    cout << "Default House Information:";
    defaultHouse.printDetails();

    
    House registeredHouse("Green Villa", "12B", "Chennai", "Tamil Nadu", 30.5, 40.2, 5);
    cout << "\nRegistered House Information:";
    registeredHouse.printDetails();

    return 0;
}
