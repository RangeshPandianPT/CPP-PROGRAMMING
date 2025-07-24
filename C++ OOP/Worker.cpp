#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
    string worker_name;
    int no_of_hours_worked;
    float pay_rate;

public:
    
    Worker(string name, int hours, float rate = 100.0) {
        worker_name = name;
        no_of_hours_worked = hours;
        pay_rate = rate;
    }

    
    float calculateSalary() {
        return no_of_hours_worked * pay_rate;
    }

    
    void display() {
        cout << "Worker Name: " << worker_name << endl;
        cout << "Hours Worked: " << no_of_hours_worked << endl;
        cout << "Pay Rate: " << pay_rate << endl;
        cout << "Salary: " << calculateSalary() << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    
    Worker w1("Alice", 40);
    w1.display();

   
    Worker w2("Bob", 35, 120.5);
    w2.display();

    return 0;
}
