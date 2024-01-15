#include <iostream>
using namespace std;

class Point
{
    protected:
    double x, y; public:
    Point ()
    {
        x = 0;
        y = 0;

    }
    void print()
    {
        std::cout << "(" << x << "," << y << ")";
    }
};




class Point3D : public Point
{
    protected:
    double z;
    public:
    Point3D()
    {
        x = 0;
        y = 0;
        z = 0;

    };
    overriding print() function 
    void print() 
    {
        std::cout << "(" << x <<"," << y <<"," << z << ")";
    }
};
int main()
{
    Point3D P3D;
    P3D.print();
}