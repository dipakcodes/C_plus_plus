#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int employeeId;
    string employeeName;
    double basicSalary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculate() {
        double DA = 0.25 * basicSalary;
        double HRA = 400;
        double incomeTax = 0.15 * basicSalary;

        double netSalary = basicSalary + DA + HRA - incomeTax;

        display(netSalary, DA, HRA, incomeTax);
    }

    void display(double netSalary, double DA, double HRA, double incomeTax) {
        cout << "\nPay Slip\n";
        cout << "Employee ID: " << employeeId << "\n";
        cout << "Employee Name: " << employeeName << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "DA: " << DA << "\n";
        cout << "HRA: " << HRA << "\n";
        cout << "Income Tax: " << incomeTax << "\n";
        cout << "Net Salary: " << netSalary << "\n";
    }
};

int main() {
    Employee emp;
    emp.input();
    emp.calculate();

    return 0;
}
