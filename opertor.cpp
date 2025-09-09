#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator
    Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload * operator
    Complex operator*(const Complex &c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    // Overload == operator
    bool operator==(const Complex &c) {
        return (real == c.real && imag == c.imag);
    }

    // Display
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex mul = c1 * c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    cout << "c1 + c2 = "; sum.display();
    cout << "c1 - c2 = "; diff.display();
    cout << "c1 * c2 = "; mul.display();

    if (c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    return 0;
}
