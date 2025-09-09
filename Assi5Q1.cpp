#include <iostream>
#include <string>
#include <algorithm> // for sort
using namespace std;

class Person {
public:
    int id;
    string name;
    string address;

    Person() {} // default constructor
    Person(int i, string n, string a) : id(i), name(n), address(a) {}
};

class PersonService {
public:
    static Person persons[100];  // Array to store persons
    static int count;            // Number of persons

    // 1. Add person
    static void addPerson() {
        if (count >= 100) {
            cout << "Array full, cannot add more persons.\n";
            return;
        }
        int id;
        string name, address;
        cout << "Enter ID: "; cin >> id;
        cin.ignore(); // ignore newline
        cout << "Enter Name: "; getline(cin, name);
        cout << "Enter Address: "; getline(cin, address);

        persons[count++] = Person(id, name, address);
        cout << "Person added successfully!\n";
    }

    // 2. Search by ID
    static void searchById() {
        int id; 
        cout << "Enter ID to search: "; cin >> id;
        for (int i = 0; i < count; i++) {
            if (persons[i].id == id) {
                cout << "ID: " << persons[i].id 
                     << ", Name: " << persons[i].name 
                     << ", Address: " << persons[i].address << endl;
                return;
            }
        }
        cout << "Person not found.\n";
    }

    // 3. Display all
    static void displayAll() {
        if (count == 0) {
            cout << "No persons to display.\n";
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << "ID: " << persons[i].id 
                 << ", Name: " << persons[i].name 
                 << ", Address: " << persons[i].address << endl;
        }
    }

    // 4. Search by Name
    static void searchByName() {
        string name;
        cin.ignore();
        cout << "Enter Name to search: "; getline(cin, name);
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (persons[i].name == name) {
                cout << "ID: " << persons[i].id 
                     << ", Name: " << persons[i].name 
                     << ", Address: " << persons[i].address << endl;
                found = true;
            }
        }
        if (!found) cout << "Person not found.\n";
    }

    /* 5. Sort by ID
    //static void sortById() {
      //  sort(persons, persons + count, [](Person a, Person b) {
       //     return a.id < b.id;
        //});
        //cout << "Sorted by ID successfully!\n";
    }*/

    /* 6. Sort by Name
    static void sortByName() {
        sort(persons, persons + count, [](Person a, Person b) {
            return a.name < b.name;
        });
        cout << "Sorted by Name successfully!\n";
    }*/

    // 7. Modify address by ID
    static void modifyAddressById() {
        int id;
        cin.ignore();
        cout << "Enter ID to modify address: "; cin >> id;
        for (int i = 0; i < count; i++) {
            if (persons[i].id == id) {
                cin.ignore();
                cout << "Enter new address: "; 
                getline(cin, persons[i].address);
                cout << "Address updated successfully!\n";
                return;
            }
        }
        cout << "Person not found.\n";
    }
};

// Initialize static members
Person PersonService::persons[100];
int PersonService::count = 0;

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add person\n";
        cout << "2. Search by id\n";
        cout << "3. Display all\n";
        cout << "4. Search by name\n";
       // cout << "5. Sort by id\n";
        //cout << "6. Sort by name\n";
        cout << "7. Modify address by id\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: "; cin >> choice;

        switch (choice) {
            case 1: PersonService::addPerson(); break;
            case 2: PersonService::searchById(); break;
            case 3: PersonService::displayAll(); break;
            case 4: PersonService::searchByName(); break;
           // case 5: PersonService::sortById(); break;
            //case 6: PersonService::sortByName(); break;
            case 7: PersonService::modifyAddressById(); break;
            case 8: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 8);

    return 0;
}

