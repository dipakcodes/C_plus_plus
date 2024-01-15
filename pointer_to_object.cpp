#include<iostream>
using namespace std;
class coordinate
{
    private:
    int x,y,z;
    public:
    void setcoordinate (int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showdim()
    {
        cout << "x=" << x << "\n" << "y=" <<y<< "\n" "z=" <<z;
    }
};

int main()
{
    coordinate *p, cor;
    p=&cor;
    p->setcoordinate(2,4,5);
    cor.showdim();
}