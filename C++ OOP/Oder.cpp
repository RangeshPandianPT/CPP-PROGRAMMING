/* Task:

Design a restaurant order system using a class Order with:

orderID, customerName, dishName, quantity, unitPrice

Add a function calculateTotalOrderAmount()

Store multiple orders in an array

Display each order with its total amount */

#include <iostream>
#include <string>
using namespace std;

class Order {
private:
    int orderID;
    string customerName;
    string dishName;
    int quantity;
    float unitPrice;

public:
    
    Order(int id, string cname, string dname, int qty, float price) {
        orderID = id;
        customerName = cname;
        dishName = dname;
        quantity = qty;
        unitPrice = price;
    }

    
    float calculateTotalOrderAmount() {
        return quantity * unitPrice;
    }

  
    void displayOrder() {
        cout << "\nOrder ID     : " << orderID;
        cout << "\nCustomer Name: " << customerName;
        cout << "\nDish Name    : " << dishName;
        cout << "\nQuantity     : " << quantity;
        cout << "\nUnit Price   : ₹" << unitPrice;
        cout << "\nTotal Amount : ₹" << calculateTotalOrderAmount();
        cout << "\n-----------------------------\n";
    }
};

int main() {
    int n;

    cout << "Enter number of orders today: ";
    cin >> n;

    Order* orders[n]; // Array of pointers to Order objects

    for (int i = 0; i < n; i++) {
        int id, qty;
        string cname, dname;
        float price;

        cout << "\nEnter details for Order #" << i + 1 << ":\n";
        cout << "Order ID: ";
        cin >> id;
        cin.ignore(); // Clear newline

        cout << "Customer Name: ";
        getline(cin, cname);

        cout << "Dish Name: ";
        getline(cin, dname);

        cout << "Quantity: ";
        cin >> qty;

        cout << "Unit Price: ";
        cin >> price;

        orders[i] = new Order(id, cname, dname, qty, price);
    }

    cout << "\n===== ORDER DETAILS =====\n";
    for (int i = 0; i < n; i++) {
        orders[i]->displayOrder();
    }

   
    for (int i = 0; i < n; i++) {
        delete orders[i];
    }

    return 0;
}


