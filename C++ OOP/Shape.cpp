/* Shape Area Calculation:
• In a graphics application, different shapes need to be managed efficiently.
Implement this scenario using hierarchical inheritance in C++:
1. Create a base class Shape with:
• Functions to get data (e.g., dimensions).
• A function to print data.
• A pure virtual function to calculate the area.
2. Create derived classes Rectangle and Circle that inherit from Shape:
• Rectangle should store length and width and override the area calculation.
• Circle should store radius and override the area calculation.
3. Demonstrate hierarchical inheritance by:
• Creating objects of Rectangle and Circle.
• Invoking the appropriate functions.
• Displaying the calculated area for each shape. */

#include <iostream>
#include <cmath> // For M_PI
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void printData() = 0;
    virtual double calculateArea() = 0;
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void getData() override {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void printData() override {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }

    double calculateArea() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void getData() override {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void printData() override {
        cout << "Circle - Radius: " << radius << endl;
    }

    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Rectangle rect;
    cout << "\n--- Rectangle Input ---" << endl;
    rect.getData();
    rect.printData();
    cout << "Rectangle Area: " << rect.calculateArea() << endl;

    Circle circ;
    cout << "\n--- Circle Input ---" << endl;
    circ.getData();
    circ.printData();
    cout << "Circle Area: " << circ.calculateArea() << endl;

    return 0;
}
