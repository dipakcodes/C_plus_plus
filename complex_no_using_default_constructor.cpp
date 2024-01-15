#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    Complex() : real(0.0), imaginary(0.0) {}

    // Method to set values
    void setComplex(double re, double im) {
        real = re;
        imaginary = im;
    }

    // Method to display complex number
    void displayComplex() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Creating an instance of the Complex class using the default constructor
    Complex defaultComplex;

    // Displaying the default complex number
    defaultComplex.displayComplex();

    return 0;
}
