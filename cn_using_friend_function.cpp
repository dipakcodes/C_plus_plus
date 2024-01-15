#include <iostream>
class Complex 
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend Complex add(const Complex& num1, const Complex& num2);
    void display() 
    {
        if (imag < 0)
            std::cout << real << " - " << -imag << "i";
        else
            std::cout << real << " + " << imag << "i";
    }
};
Complex add(const Complex& num1, const Complex& num2) {
    double realSum = num1.real + num2.real;
    double imagSum = num1.imag + num2.imag;
    return Complex(realSum, imagSum);
}

int main() {
    Complex num1(3.5, 2.5);
    Complex num2(1.2, -0.7);

    std::cout << "Complex number 1: ";
    num1.display();
    std::cout << std::endl;

    std::cout << "Complex number 2: ";
    num2.display();
    std::cout << std::endl;

    Complex sum = add(num1, num2);

    std::cout << "Sum of the two complex numbers: ";
    sum.display();
    std::cout << std::endl;

    return 0;
}

