/*📝 Task Description
You are required to write a C++ program using hierarchical inheritance to manage employee information for an organization.

✅ Requirements:
Create a base class BasicInfo that holds the basic employee details:

ename (Employee Name)
eid (Employee ID)
gender (Gender)
Create a derived class DeptInfo (inherits from BasicInfo), which contains department-related details:
deptname (Department Name)
assignedwork (Type of work assigned)
timetocomplete (Expected days to complete the work)
Create another derived class LoanInfo (also inherits from BasicInfo), which contains loan/financial information:
pf (Provident Fund amount)

Use hierarchical inheritance:
Both DeptInfo and LoanInfo inherit from the common base class BasicInfo.

The program should:

Read and display basic info for both department and loan data.

Show department-specific info for DeptInfo.

Show PF info for LoanInfo.*/

#include <iostream>
#include <string>
using namespace std;


class BasicInfo {
protected:
    string ename;
    int eid;
    char gender;

public:
    void readBasicInfo() {
        cout << "Enter Employee Name: ";
        getline(cin, ename);
        cout << "Enter Employee ID: ";
        cin >> eid;
        cout << "Enter Gender (M/F): ";
        cin >> gender;
        cin.ignore(); // to consume newline after gender input
    }

    void printBasicInfo() {
        cout << "\nEmployee Name: " << ename << endl;
        cout << "Employee ID: " << eid << endl;
        cout << "Gender: " << gender << endl;
    }
};


class DeptInfo : public BasicInfo {
private:
    string deptname;
    string assignedwork;
    int timetocomplete;

public:
    void readDeptInfo() {
        readBasicInfo();
        cout << "Enter Department Name: ";
        getline(cin, deptname);
        cout << "Enter Assigned Work: ";
        getline(cin, assignedwork);
        cout << "Enter Time to Complete Work (in days): ";
        cin >> timetocomplete;
    }

    void printDeptInfo() {
        printBasicInfo();
        cout << "Department Name: " << deptname << endl;
        cout << "Assigned Work: " << assignedwork << endl;
        cout << "Time to Complete Work: " << timetocomplete << " days" << endl;
    }
};


class LoanInfo : public BasicInfo {
private:
    float pf; 

public:
    void readLoanInfo() {
        readBasicInfo();
        cout << "Enter PF Amount: ";
        cin >> pf;
    }

    void printLoanInfo() {
        printBasicInfo();
        cout << "Provident Fund (PF): ₹" << pf << endl;
    }
};

int main() {
    
    cout << "Enter Department Info:\n";
    DeptInfo deptEmp;
    deptEmp.readDeptInfo();

   
    cout << "\nEnter Loan Info:\n";
    LoanInfo loanEmp;
    loanEmp.readLoanInfo();

   
    cout << "\n--- Department Info ---" << endl;
    deptEmp.printDeptInfo();

    cout << "\n--- Loan Info ---" << endl;
    loanEmp.printLoanInfo();

    return 0;
}
