#include<iostream>
using namespace std;
class base
{
    public:
    void print()
    {
        cout << "I am from base class." << endl;

    }
};

class derived : public base
{
    public:
    void print()
    {
        cout << "I am from derived class." << endl;
    }
};

int main()
{
    derived d;
    d.print();
    return 0;
}