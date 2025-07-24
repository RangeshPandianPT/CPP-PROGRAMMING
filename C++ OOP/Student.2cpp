/* Student Performance System:
• Develop a student performance management system using hybrid inheritance
in C++. Implement the following class hierarchy:
1. Create a base class Student to store student details:
• Attributes: name, roll number
• Functions: set and display student details
2. Create a derived class Marks inheriting from Student to manage academic
marks:
• Attribute: marks in three subjects
• Function: calculate total academic marks
3. Create another derived class Sports to store sports performance:
• Attribute: sports marks
• Function: display sports marks
4. Create a final class Result that inherits from both Marks and Sports to
compute the overall performance:
• Function: calculate the total marks (academic + sports) and average
Implementation Requirements:
• Use Hybrid Inheritance (Combination of Multiple and Hierarchical
Inheritance).
• Demonstrate the use of virtual base class (if needed) to avoid
ambiguity.
• Implement object creation, data input, and output display.
• Show how overriding or function overloading can be applied.
Expected Output:
• Display Student details (name & roll number).
• Display academic marks, total academic marks.
• Display sports marks.
• Display overall result (total and average marks).
• Explain Hybrid Inheritance and how it prevents ambiguity.
• Discuss real-world applications of such an inheritance structure.
• Highlight advantages and potential challenges in implementing hybrid
inheritance in large-scale systems. */

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
public:
    void setStudentDetails(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks : virtual public Student {
protected:
    int subject1, subject2, subject3;
    int totalAcademicMarks;
public:
    void setMarks(int m1, int m2, int m3) {
        subject1 = m1;
        subject2 = m2;
        subject3 = m3;
    }

    void calculateTotalAcademicMarks() {
        totalAcademicMarks = subject1 + subject2 + subject3;
    }

    void displayAcademicMarks() {
        cout << "Subject 1: " << subject1 << endl;
        cout << "Subject 2: " << subject2 << endl;
        cout << "Subject 3: " << subject3 << endl;
        cout << "Total Academic Marks: " << totalAcademicMarks << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void displaySportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Result : public Marks, public Sports {
private:
    int overallTotal;
    float average;
public:
    void calculateOverallResult() {
        overallTotal = totalAcademicMarks + sportsMarks;
        average = overallTotal / 4.0;  // 3 subjects + 1 sports
    }

    void displayResult() {
        displayStudentDetails();
        displayAcademicMarks();
        displaySportsMarks();
        cout << "Overall Total Marks (Academic + Sports): " << overallTotal << endl;
        cout << "Average Marks: " << average << endl;
    }

    void displayResult(string title) {
        cout << "\n " << title << " \n";
        displayResult();
    }
};

int main() {
    Result student;

    student.setStudentDetails("Aarav Mehta", 101);
    student.setMarks(85, 90, 88);
    student.setSportsMarks(15);

    student.calculateTotalAcademicMarks();
    student.calculateOverallResult();

    student.displayResult("Final Report");

    return 0;
}
