#include <iostream>
#include <string>
#include <iomanip>
#include<sstream>

using namespace std;

int accountCount = 0; // global counter for account id

// Account Holder class
class AccountHolder {
public:
    string fname, lname, mobile, email;

    AccountHolder(string fn, string ln, string mob, string em) {
        fname = fn;
        lname = ln;
        mobile = mob;
        email = em;
    }
};

// Abstract Account class
class Account {
protected:
    string accountId;
    string type;
    double interestRate;
    double minBalance;
    AccountHolder holder;

    string generateId(string fn, string ln) {
        accountCount++;
        stringstream ss;
        ss << accountCount;
        string id = fn.substr(0,3) + ln.substr(0,3) + ss.str();
        return id;
    }

public:
    Account(string fn, string ln, string mob, string em, string t, double ir, double mb)
        : holder(fn, ln, mob, em) {
        type = t;
        interestRate = ir;
        minBalance = mb;
        accountId = generateId(fn, ln);
    }

    virtual void display() {
        cout << "Account ID: " << accountId << endl;
        cout << "Type: " << type << endl;
        cout << "Holder: " << holder.fname << " " << holder.lname << endl;
        cout << "Mobile: " << holder.mobile << " Email: " << holder.email << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Minimum Balance: " << minBalance << endl;
    }
};

// Saving Account
class SavingAccount : public Account {
    string chequebookNumber;

public:
    SavingAccount(string fn, string ln, string mob, string em, string chq)
        : Account(fn, ln, mob, em, "Saving", 4.0, 20000), chequebookNumber(chq) {}

    void display() override {
        Account::display();
        cout << "Chequebook Number: " << chequebookNumber << endl;
    }
};

// Current Account
class CurrentAccount : public Account {
    int transactionsPerDay;

public:
    CurrentAccount(string fn, string ln, string mob, string em, int tx)
        : Account(fn, ln, mob, em, "Current", 1.0, 1000), transactionsPerDay(tx) {}

    void updateTransactions(int avgBalance) {
        if (avgBalance > 50000)
            transactionsPerDay = 20;
        else if (avgBalance > 20000)
            transactionsPerDay = 10;
        else
            transactionsPerDay = 5;
    }

    void display() override {
        Account::display();
        cout << "Transactions per Day: " << transactionsPerDay << endl;
    }
};

int main() {
    SavingAccount sa("Samir", "Mullani", "9999999999", "samir@mail.com", "CHQ12345");
    sa.display();

    cout << "----------------------" << endl;

    CurrentAccount ca("Varsha", "Powar", "8888888888", "varsha@mail.com", 5);
    ca.updateTransactions(60000); // based on average balance
    ca.display();

    return 0;
}

