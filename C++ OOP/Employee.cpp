/*Task:

Create a class Employee with:

Attributes: employeeID, name, and salary.

Auto-incrementing employeeID for each new employee.

Use access specifiers properly (private, public).

Draw a UML diagram (explained in comments).

Explain the importance of access control in real-world systems.*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    static int nextID;     
    int employeeID;
    string name;
    double salary;

public:
   
    Employee(string empName, double empSalary) {
        employeeID = ++nextID;   // auto-increment ID
        name = empName;
        salary = empSalary;
    }

    
    void displayInfo() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name       : " << name << endl;
        cout << "Salary     : " << salary << endl;
        cout << "------------------------\n";
    }
};


int Employee::nextID = 1000;

int main() {
   
    Employee emp1("John Doe", 45000);
    Employee emp2("Jane Smith", 52000);

   
    cout << "Employee Records:\n";
    emp1.displayInfo();
    emp2.displayInfo();

    return 0;
}
