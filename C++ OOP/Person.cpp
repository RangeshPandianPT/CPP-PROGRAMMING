/* Academic Hierarchy:
• In an academic institution, different roles have hierarchical relationships.
Implement this scenario using multilevel inheritance in C++:
1. Create a base class Person that contains:
• A name attribute.
• A function to set and display the name.
2. Create a derived class Teacher that inherits from Person and includes:
• A subject attribute.
• A function to set and display the subject.
3. Create a further derived class Professor that inherits from Teacher and
includes:
• A department attribute.
• A function to set and display the department.
4. Demonstrate multilevel inheritance by:
• Creating an object of Professor.
• Setting values for name, subject, and department.
• Displaying the details of the professor.
Explain how multilevel inheritance works, describe the output, and discuss the
advantages and challenges of using multilevel inheritance in object-oriented
programming. */

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) {
        subject = s;
    }
    void displaySubject() {
        cout << "Subject: " << subject << endl;
    }
};

class Professor : public Teacher {
private:
    string department;
public:
    void setDepartment(string d) {
        department = d;
    }
    void displayDepartment() {
        cout << "Department: " << department << endl;
    }

    void displayDetails() {
        displayName();
        displaySubject();
        displayDepartment();
    }
};

int main() {
    Professor prof;

    // Setting values
    prof.setName("Dr. Rajesh Sharma");
    prof.setSubject("Computer Science");
    prof.setDepartment("Engineering");

    // Displaying all details
    cout << "Professor Details " << endl;
    prof.displayDetails();

    return 0;
}
