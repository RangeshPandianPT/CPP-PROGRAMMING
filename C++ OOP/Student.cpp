/* Student-Athlete System:
• Design and implement a C++ program using multiple inheritance to model a
scenario where:
1. A Student has a name and roll number.
2. A SportsPlayer has a sport name and ranking.
3. A SportStudent inherits from both Student and SportsPlayer, combining the
properties of both.
The program should include:
• A base class Student with attributes for name and roll number.
• A base class SportsPlayer with attributes for sport name and ranking.
• A derived class SportStudent that inherits from both Student and
SportsPlayer.
• A function to display details of a SportStudent.
• Demonstration of creating an object of SportStudent and displaying its
details. */

#include <iostream>
#include <string>
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
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;

public:
    void setSportsDetails(string sport, int rank) {
        sportName = sport;
        ranking = rank;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Sport Name: " << sportName << endl;
        cout << "Ranking: " << ranking << endl;
    }
};

int main() {
  
    SportStudent ss;

    ss.setStudentDetails("Ayesha Khan", 101);
    ss.setSportsDetails("Basketball", 2);

    cout << "Sport Student Details " << endl;
    ss.displayDetails();

    return 0;
}
