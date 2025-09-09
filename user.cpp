#include <iostream>
#include <string>
using namespace std;

// ---------------- Base Class ----------------
class User {
protected:
    int dataUsage; // in GB
public:
    User(int usage) : dataUsage(usage) {}
    virtual ~User() {}

    // Virtual function for polymorphism
    virtual void calculateBill(const string& discountCode = "") = 0;
};

// ---------------- Derived Class: Basic ----------------
class BasicUser : public User {
public:
    BasicUser(int usage) : User(usage) {}

    void calculateBill(const string& discountCode = "") override {
        int baseCharge = 500;
        int extra = 0;

        if (dataUsage > 50) {
            extra = (dataUsage - 50) * 5;
        }

        int total = baseCharge + extra;

        cout << "User type = Basic. ";
        cout << "Extra data charge = Rs. " << extra << ". ";
        cout << "Total Bill = Rs. " << total << endl;
    }
};

// ---------------- Derived Class: Premium ----------------
class PremiumUser : public User {
public:
    PremiumUser(int usage) : User(usage) {}

    void calculateBill(const string& discountCode = "") override {
        int baseCharge = 1000;
        int extra = 0;

        if (dataUsage > 100) {
            extra = (dataUsage - 100) * 5;
        }

        int total = baseCharge + extra;

        // apply discount if code is NET50
        if (discountCode == "NET50") {
            total -= 50;
        }

        cout << "User type = Premium. ";
        cout << "Extra data charge = Rs. " << extra << ". ";
        cout << "Total Bill after discount = Rs. " << total << endl;
    }
};

// ---------------- Main Function ----------------
int main() {
    char userType;
    int usage;
    string discount;

    // Input user type
    cout << "Enter type of User (B for Basic, P for Premium): ";
    cin >> userType;

    // Input usage with validation
    cout << "Enter data usage in GB: ";
    cin >> usage;
    if (usage <= 0) {
        cout << "Error: Data usage must be positive!" << endl;
        return 1;
    }

    User* user = nullptr;

    if (userType == 'B' || userType == 'b') {
        user = new BasicUser(usage);
        user->calculateBill();   // no discount for basic
    }
    else if (userType == 'P' || userType == 'p') {
        cout << "Enter discount code (or press Enter to skip): ";
        cin.ignore();                // clear input buffer
        getline(cin, discount);      // read full line
        user = new PremiumUser(usage);
        user->calculateBill(discount);
    }
    else {
        cout << "Error: Invalid user type!" << endl;
        return 1;
    }

    delete user;  // free memory
    return 0;
}