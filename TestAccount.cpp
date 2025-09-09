#include "AccountService.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<Account*> accounts;
    int choice;

    do {
        cout << "\n--- Account Management ---\n";
        cout << "1. Add new account\n";
        cout << "3. Display All Accounts\n";
        cout << "4. Search by account number\n";
        cout << "5. Search by Name\n";
        cout << "6. Sort Accounts by balance\n";
        cout << "7. Display All Saving Account\n";
        cout << "8. Display All Current Account\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            AccountService::addAccount(accounts);
            break;
        case 3:
            AccountService::displayAll(accounts);
            break;
        case 4: {
            int no;
            cout << "Enter Account No: ";
            cin >> no;
            AccountService::searchByAccNo(accounts, no);
            break;
        }
        case 5: {
            string nm;
            cout << "Enter Name: ";
            cin >> nm;
            AccountService::searchByName(accounts, nm);
            break;
        }
        case 6:
            AccountService::sortByBalance(accounts);
            break;
        case 7:
            AccountService::displaySaving(accounts);
            break;
        case 8:
            AccountService::displayCurrent(accounts);
            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 9);

    // cleanup
    for (size_t i = 0; i < accounts.size(); i++)
        delete accounts[i];
    accounts.clear();

    return 0;
}

