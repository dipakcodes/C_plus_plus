#include<iostream>
using namespace std;

class base{
    public:
    void display()
    {
        cout << "\n Display base";
    }
    virtual void show()
    {
        cout << "\n show base";
    }
};
class derived: public base{
    public:
    void display()
    {
        cout << "\n Display derived";
    }
    void show()
    {
        cout << "\n show derived";
    }
};

int main()
{
    base b;
    derived d;
    base *bptr;
    cout << "\n bptr points to base\n";
    bptr = &b;
    bptr -> display();
    bptr -> show();
    cout << "\n Bptr points to derived\n";
    bptr = &d;
    bptr -> display();
    bptr -> show();
    return 0;

}
