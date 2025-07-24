#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    
    Triangle() {
        base = 0;
        height = 0;
    }

    
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

   
    Triangle(double val) {
        base = val;
        height = val;
    }

   
    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    
    Triangle t1;
    cout << "Area of t1 (no parameters): " << t1.area() << endl;

   
    Triangle t2(5);
    cout << "Area of t2 (one parameter): " << t2.area() << endl;

  
    Triangle t3(4, 6);
    cout << "Area of t3 (two parameters): " << t3.area() << endl;

    return 0;
}
