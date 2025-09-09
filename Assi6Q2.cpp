#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    int id;
    string name;
    string address;
    float m1, m2, m3;
    float percentage;
    string degree;

public:
    Student(int id, string name, string address, float m1, float m2, float m3, string degree)
        : id(id), name(name), address(address), m1(m1), m2(m2), m3(m3), degree(degree) {
        percentage = (m1 + m2 + m3) / 3.0;
    }

    virtual void display() {
        cout << "\n--- Student Information ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Degree: " << degree << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class MSc Student
class MScStudent : public Student {
    float specialSubjectMarks;
    float languageMarks;

public:
    MScStudent(int id, string name, string address, float m1, float m2, float m3,
               string degree, float special, float language)
        : Student(id, name, address, m1, m2, m3, degree),
          specialSubjectMarks(special), languageMarks(language) {}

    void display() override {
        Student::display();
        cout << "Special Subject Marks: " << specialSubjectMarks << endl;
        cout << "Language Marks: " << languageMarks << endl;
    }
};

// Derived class PhD Student
class PhDStudent : public Student {
    string thesisName;
    float thesisMarks;

public:
    PhDStudent(int id, string name, string address, float m1, float m2, float m3,
               string degree, string thesis, float thesisMarks)
        : Student(id, name, address, m1, m2, m3, degree),
          thesisName(thesis), thesisMarks(thesisMarks) {}

    void display() override {
        Student::display();
        cout << "Thesis Name: " << thesisName << endl;
        cout << "Thesis Marks: " << thesisMarks << endl;
    }
};


int main() {
    MScStudent msc(101, "Azlaan", "Pune", 85, 90, 80, "MSc", 88, 92);
    PhDStudent phd(201, "Samir", "Ichalkaranji", 78, 82, 75, "PhD", "AI in Education", 95);

    cout << "\nDisplaying MSc Student:\n";
    msc.display();

    cout << "\nDisplaying PhD Student:\n";
    phd.display();

    return 0;
}

