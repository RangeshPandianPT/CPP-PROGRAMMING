/* ✅ Task Summary:
Create a base class Marks with:

roll_no (auto-generated)

name

Create derived classes: Physics, Chemistry, and Mathematics inheriting from Marks.

Store and display each student’s marks in Physics, Chemistry, and Mathematics.

Compute:

Total marks for each student.

Average marks of the entire class. */

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;


class Marks {
protected:
    static int rollCounter;
    int roll_no;
    string name;

public:
    Marks() {
        roll_no = ++rollCounter;
    }

    void readName() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
    }

    void displayBasicInfo() const {
        cout << "Roll No: " << roll_no << ", Name: " << name << endl;
    }

    int getRollNo() const { return roll_no; }
    string getName() const { return name; }
};

int Marks::rollCounter = 0;


class Physics : virtual public Marks {
protected:
    float physics_marks;

public:
    void readPhysics() {
        cout << "Enter marks in Physics: ";
        cin >> physics_marks;
    }

    float getPhysicsMarks() const {
        return physics_marks;
    }
};

class Chemistry : virtual public Marks {
protected:
    float chemistry_marks;

public:
    void readChemistry() {
        cout << "Enter marks in Chemistry: ";
        cin >> chemistry_marks;
    }

    float getChemistryMarks() const {
        return chemistry_marks;
    }
};

class Mathematics : virtual public Marks {
protected:
    float math_marks;

public:
    void readMath() {
        cout << "Enter marks in Mathematics: ";
        cin >> math_marks;
    }

    float getMathMarks() const {
        return math_marks;
    }
};


class Student : public Physics, public Chemistry, public Mathematics {
public:
    void readData() {
        readName();
        readPhysics();
        readChemistry();
        readMath();
    }

    float totalMarks() const {
        return physics_marks + chemistry_marks + math_marks;
    }

    void displayData() const {
        displayBasicInfo();
        cout << fixed << setprecision(2);
        cout << "Physics: " << physics_marks << ", Chemistry: " << chemistry_marks
             << ", Mathematics: " << math_marks << endl;
        cout << "Total Marks: " << totalMarks() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);
    float totalClassMarks = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":" << endl;
        students[i].readData();
        totalClassMarks += students[i].totalMarks();
    }

    cout << "\n========= Student Results =========\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }

    float average = totalClassMarks / (n * 3); // 3 subjects per student
    cout << "Average Marks of Class (per subject): " << fixed << setprecision(2) << average << endl;

    return 0;
}



