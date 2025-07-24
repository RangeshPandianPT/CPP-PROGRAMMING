/* Develop a Car Rental System where
i) Constructor Overloading is used for initializing the class ‘Car’ with
• Default constructor (sets default values).
• Car model, price per day, and availability status.
• Copy constructor to create a duplicate car.
ii) Function Overloading s used by the customers to book a car in different ways as:
• By specifying the number of days (default price applies).
• By specifying a discount percentage.
• By specifying an extra insurance amount.
iii) Operator Overloading where
• The + operator should allow combining the total rental prices of two cars
• The > operator should compare which car is more expensive to rent per day */

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    double pricePerDay;
    bool isAvailable;

public:
    
    Car() {
        model = "Unknown";
        pricePerDay = 100.0;
        isAvailable = true;
    }

   
    Car(string m, double price, bool available) {
        model = m;
        pricePerDay = price;
        isAvailable = available;
    }

    
    Car(const Car& other) {
        model = other.model;
        pricePerDay = other.pricePerDay;
        isAvailable = other.isAvailable;
    }

    void display() const {
        cout << "Model: " << model << "\nPrice per Day: $" << pricePerDay
             << "\nAvailable: " << (isAvailable ? "Yes" : "No") << endl;
    }


    double book(int days) {
        if (!isAvailable) {
            cout << "Car not available.\n";
            return 0;
        }
        return days * pricePerDay;
    }

    double book(double discountPercent) {
        if (!isAvailable) {
            cout << "Car not available.\n";
            return 0;
        }
        double discount = pricePerDay * (discountPercent / 100.0);
        return pricePerDay - discount;
    }

    double book(int days, double insurance) {
        if (!isAvailable) {
            cout << "Car not available.\n";
            return 0;
        }
        return (days * pricePerDay) + insurance;
    }

    double operator+(const Car& other) const {
        return this->pricePerDay + other.pricePerDay;
    }

    bool operator>(const Car& other) const {
        return this->pricePerDay > other.pricePerDay;
    }

    double getPricePerDay() const {
        return pricePerDay;
    }
};

int main() {
    Car car1("Toyota Corolla", 120.0, true);
    Car car2("Honda Civic", 150.0, true);

    // Using copy constructor
    Car car3 = car2;

    cout << "Car 1 Details:\n";
    car1.display();

    cout << "\nCar 2 Details:\n";
    car2.display();

    cout << "\nCar 3 (Copy of Car 2):\n";
    car3.display();

    cout << "\nBooking Car1 for 3 days: $" << car1.book(3) << endl;
    cout << "Booking Car1 with 10% discount: $" << car1.book(10.0) << endl;
    cout << "Booking Car1 for 5 days with $50 insurance: $" << car1.book(5, 50.0) << endl;

    double totalPrice = car1 + car2;
    cout << "\nTotal combined price per day (Car1 + Car2): $" << totalPrice << endl;

    if (car1 > car2)
        cout << "Car1 is more expensive per day than Car2.\n";
    else
        cout << "Car2 is more expensive per day than Car1.\n";

    return 0;
}
