#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    ComplexNumber operator + (const ComplexNumber& obj) {
        return ComplexNumber(real + obj.real, imag + obj.imag);
    }

    ComplexNumber operator - (const ComplexNumber& obj) {
        return ComplexNumber(real - obj.real, imag - obj.imag);
    }

    ComplexNumber operator * (const ComplexNumber& obj) {
        double r = (real * obj.real) - (imag * obj.imag);
        double i = (real * obj.imag) + (imag * obj.real);
        return ComplexNumber(r, i);
    }

    bool operator == (const ComplexNumber& obj) {
        return (real == obj.real && imag == obj.imag);
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    ComplexNumber c1(3, 4), c2(1, 2);
    ComplexNumber c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    ComplexNumber c4(8, 3), c5(5, 6);
    ComplexNumber c6 = c4 - c5;
    cout << "Subtraction: ";
    c6.display();

    ComplexNumber c7(2, 3), c8(1, 4);
    ComplexNumber c9 = c7 * c8;
    cout << "Multiplication: ";
    c9.display();

    ComplexNumber c10(3, 5), c11(3, 5);
    if (c10 == c11) {
        cout << "c10 and c11 are Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}