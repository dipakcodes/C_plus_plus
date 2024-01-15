#include<iostream>
using namespace std;
class Powerdevice
{
    public:
    Powerdevice(){}
    Powerdevice(int power)
    {
        cout << "powerdevice:" << power << '\n';
    }
};

class Scanner : public Powerdevice
{
    public:
    Scanner(){}
    Scanner(int scanner, int power): Powerdevice(power)
    {
        cout << "scanner:" << scanner << '\n';
    }
};

class Printer : public Powerdevice
{
    public:
    Printer(){}
    Printer(int printer, int power): Powerdevice(power)
    {
        cout << "printer:" << printer<< '\n';
    }
};
class Copier: public Scanner, public Printer
{
    public:
    Copier(int scanner, int printer, int power): Scanner(scanner, power),Printer(printer, power){}

};

int main()
{
    Copier copier(1, 2, 3);
}