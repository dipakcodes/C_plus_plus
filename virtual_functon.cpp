#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print()
    {
        cout << "Base function" << endl;
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout << "Derived function" << endl;
    }
};

int main()
{
    derived derived;
    //pointer of base type that points to derived
    base* base1 = &derived;
    //calls member function of derived class
    base1->print();
    return 0;
}