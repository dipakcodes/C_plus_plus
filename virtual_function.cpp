#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    virtual void show() = 0;
    int getX()
    {
        return x;
    }
};

class derived : public base
{
    int y;
    public:
    void show()
    {
        cout << "This member function is called.";
    }
};
int main()
{
    derived d;
    d.show();
}