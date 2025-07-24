/* Demonstrate the ticket booking and cancellation process with multiple objects */

#include <iostream>
#include <string>
using namespace std;

class Ticket {
    string passengerName;
    int ticketID;
    bool isBooked;

public:
    Ticket(string name, int id) : passengerName(name), ticketID(id), isBooked(false) {}

    void book() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked for " << passengerName << " [ID: " << ticketID << "]\n";
        } else {
            cout << "Ticket already booked for " << passengerName << ".\n";
        }
    }

    void cancel() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket cancelled for " << passengerName << " [ID: " << ticketID << "]\n";
        } else {
            cout << "No booking found for " << passengerName << ".\n";
        }
    }

    void displayStatus() {
        cout << "Passenger: " << passengerName
             << " | Ticket ID: " << ticketID
             << " | Status: " << (isBooked ? "Booked" : "Not Booked") << endl;
    }
};

int main() {
    Ticket t1("Alice", 101);
    Ticket t2("Bob", 102);
    Ticket t3("Charlie", 103);

    t1.book();
    t2.book();
    t2.cancel();
    t3.cancel(); // Trying to cancel before booking

    t1.displayStatus();
    t2.displayStatus();
    t3.displayStatus();

    return 0;
}
